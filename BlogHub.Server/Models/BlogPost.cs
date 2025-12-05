using MongoDB.Bson;
using MongoDB.Bson.Serialization.Attributes;

namespace BlogHub.Server.Models
{
    public class BlogPost
    {
        [BsonId]
        [BsonRepresentation(BsonType.ObjectId)]
        public string Id { get; set; } = ObjectId.GenerateNewId().ToString();

        public string Title { get; set; } = "";
        public string Author { get; set; } = "";
        public string UserId { get; set; } = "";
        public string Content { get; set; } = "";
        public string? ImageUrl { get; set; } = "";

        public List<string> Categories { get; set; } = new();

        public DateTime CreatedAt { get; set; } = DateTime.UtcNow;
    }
}