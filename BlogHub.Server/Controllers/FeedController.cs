using BlogHub.Shared.Models;
using BlogHub.Server.Services;
using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using System.Security.Claims;

namespace BlogHub.Server.Controllers;

[Authorize]
[ApiController]
[Route("api/feed")]
public class FeedController : ControllerBase
{
    private readonly MongoService _mongo;
    private readonly Supabase.Client _supabase;

    public FeedController(MongoService mongo, Supabase.Client supabase)
    {
        _mongo = mongo;
        _supabase = supabase;
    }

    [HttpGet("followed")]
    public async Task<ActionResult<List<FeedPostDto>>> GetFollowedFeed()
    {
        var userId = User.FindFirst(ClaimTypes.NameIdentifier)?.Value;
        if (string.IsNullOrEmpty(userId))
            return Unauthorized();

        var followeesResponse = await _supabase
            .From<Follows>()
            .Select("followee_id")
            .Where(f => f.FollowerId == userId)
            .Get();

        var followeeIds = followeesResponse.Models
            .Select(f => f.FolloweeId)
            .ToList();

        if (!followeeIds.Any())
            return Ok(new List<FeedPostDto>());

        var postsResponse = await _supabase
            .From<PostsFeed>()
            .Filter("author_id", Supabase.Postgrest.Constants.Operator.In, followeeIds)
            .Order("created_at", Supabase.Postgrest.Constants.Ordering.Descending)
            .Get();

        var result = new List<FeedPostDto>();

        foreach (var p in postsResponse.Models)
        {
            var likeCount = await _supabase
                .From<PostLike>()
                .Where(l => l.PostMongoId == p.MongoId)
                .Count(Supabase.Postgrest.Constants.CountType.Exact);

            var commentCount = await _supabase
                .From<PostComment>()
                .Where(c => c.PostMongoId == p.MongoId)  
                .Count(Supabase.Postgrest.Constants.CountType.Exact);

            result.Add(new FeedPostDto
            {
                MongoId      = p.MongoId ?? "",
                Title        = p.Title ?? "Untitled",
                AuthorName   = p.AuthorName ?? "Unknown",
                ImageUrl     = p.ImageUrl,
                Categories   = p.Categories ?? new List<string>(),
                CreatedAt    = p.CreatedAt,
                LikeCount    = (int)likeCount,
                CommentCount = (int)commentCount
            });
        }

        return Ok(result);
    }

    public class FeedPostDto
    {
        public string MongoId { get; set; } = "";
        public string Title { get; set; } = "";
        public string AuthorName { get; set; } = "";
        public string? ImageUrl { get; set; }
        public List<string> Categories { get; set; } = new();
        public DateTime CreatedAt { get; set; }
        public int LikeCount { get; set; }
        public int CommentCount { get; set; }
    }
}