//BlogHub.Client/Models/FeedPostViewModel.cs
namespace BlogHub.Client.Models
{
    public class FeedPostViewModel
    {
        public string MongoId { get; set; } = "";
        public string Title { get; set; } = "";
        public string AuthorName { get; set; } = "";
        public string? ImageUrl { get; set; }
        public DateTime CreatedAt { get; set; }

        public int LikesCount { get; set; }
        public int CommentsCount { get; set; }
        public bool IsLiking { get; set; } = false;
        public bool IsLiked { get; set; } = false;
    }
}