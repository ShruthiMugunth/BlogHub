using BlogHub.Server.Services;
using BlogHub.Shared.Models;
using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using Supabase;
using System.Security.Claims;
using BlogHub.Server.Models;
namespace BlogHub.Server.Controllers
{
    [Authorize]
    [ApiController]
    [Route("api/[controller]")]
    public class BlogController : ControllerBase
    {
        private readonly MongoService _mongo;
        private readonly Client _supabaseAnon;
        public BlogController(MongoService mongo, Client supabaseAnon)
        {
            _mongo = mongo;
            _supabaseAnon = supabaseAnon;
        }
        [HttpPost]
        public async Task<IActionResult> Post([FromBody] CreateBlogDto dto)
        {
            var userId = User.FindFirst(ClaimTypes.NameIdentifier)?.Value!;
            var userEmail = User.FindFirst(ClaimTypes.Email)?.Value ?? "user@example.com";
            string username = userEmail.Split('@')[0];

            try
            {
                var profile = await _supabaseAnon
                    .From<Profiles>()
                    .Where(p => p.Id == userId)
                    .Single();
                username = profile?.Username ?? username;
            }
            catch { }

            var mongoPost = new BlogHub.Server.Models.BlogPost
            {
                Title = dto.Title,
                Content = dto.Content,
                Author = userEmail,
                UserId = userId,
                ImageUrl = dto.ImageUrl,
                Categories = dto.Categories
                    .Where(c => !string.IsNullOrWhiteSpace(c))
                    .Select(c => c.Trim())
                    .Distinct()
                    .ToList()
            };

            var createdPost = await _mongo.CreatePostAsync(mongoPost);

            try
            {
                await _supabaseAnon
                    .From<PostsFeed>()
                    .Insert(new PostsFeed
                    {
                        MongoId = createdPost.Id,
                        Title = dto.Title,
                        Categories = mongoPost.Categories, 
                        ImageUrl = dto.ImageUrl,
                        AuthorId = userId,
                        AuthorName = username,
                        CreatedAt = DateTime.UtcNow
                    });
            }
            catch (Exception ex)
            {
                Console.WriteLine($"[WARNING] Failed to insert into posts_feed: {ex.Message}");
            }

            return Ok(new { message = "Blog published successfully!", id = createdPost.Id });
        }
        [HttpGet("{id}")]
        public async Task<IActionResult> GetPost(string id)
        {
            var post = await _mongo.GetPostAsync(id);
            return post is not null ? Ok(post) : NotFound();
        }
        [HttpGet("user/{userId}")]
        public async Task<IActionResult> GetUserPosts(string userId)
        {
            var posts = await _mongo.GetPostsByUserIdAsync(userId);
            return Ok(posts);
        }
        [HttpPost("{id}/like")]
        public async Task<IActionResult> AddLike(string id)
        {
            var userId = User.FindFirst(ClaimTypes.NameIdentifier)?.Value!;
            await _supabaseAnon.From<PostLike>().Insert(new PostLike
            {
                PostMongoId = id,
                UserId = userId
            });
            return Ok();
        }
        [HttpDelete("{id}/like")]
        public async Task<IActionResult> RemoveLike(string id)
        {
            var userId = User.FindFirst(ClaimTypes.NameIdentifier)?.Value!;
            await _supabaseAnon.From<PostLike>()
                .Where(l => l.PostMongoId == id && l.UserId == userId)
                .Delete();
            return Ok();
        }
        [HttpPost("{id}/comment")]
        public async Task<IActionResult> AddComment(string id, [FromBody] CommentDto dto)
        {
            var userId = User.FindFirst(ClaimTypes.NameIdentifier)?.Value!;
            await _supabaseAnon.From<PostComment>().Insert(new PostComment
            {
                PostMongoId = id,
                UserId = userId,
                UserName = dto.UserName,
                Content = dto.Content,
                CreatedAt = DateTime.UtcNow
            });
            return Ok();
        }
    }
    public class CreateBlogDto
    {
        public string Title { get; set; } = "";
        public string Content { get; set; } = "";
        public string? ImageUrl { get; set; } = "";
        public List<string> Categories { get; set; } = new();
    }

    public class CommentDto
    {
        public string UserName { get; set; } = "";
        public string Content { get; set; } = "";
    }
}
