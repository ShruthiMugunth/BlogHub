using MongoDB.Driver;
using BlogHub.Server.Models;

namespace BlogHub.Server.Services
{
    public class MongoService
    {
        private readonly IMongoCollection<BlogPost> _posts;

        public MongoService(IMongoDatabase database)
        {
            _posts = database.GetCollection<BlogPost>("posts");
        }

        public async Task<BlogPost> CreatePostAsync(BlogPost post)
        {
            await _posts.InsertOneAsync(post);
            return post; 
        }
        public async Task<BlogPost?> GetPostAsync(string id)
        {
            return await _posts.Find(p => p.Id == id).FirstOrDefaultAsync();
        }

        public async Task<List<BlogPost>> GetPostsByUserIdAsync(string userId)
        {
            return await _posts.Find(p => p.UserId == userId).ToListAsync();
        }
    }
}