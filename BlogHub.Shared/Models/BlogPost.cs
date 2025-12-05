namespace BlogHub.Shared.Models
{
    public class BlogPost
    {
        public string Id { get; set; } = "";
        public string Title { get; set; } = "";
        public string Author { get; set; } = "";
        public string UserId { get; set; } = "";
        public string Content { get; set; } = "";
        public string? ImageUrl { get; set; }
        public DateTime CreatedAt { get; set; }

        public List<string> Categories { get; set; } = new();
    }
}