// BlogHub.Shared/Models/SupabaseModels.cs
using Supabase.Postgrest.Attributes;
using Supabase.Postgrest.Models;
using System;
using System.Collections.Generic;

namespace BlogHub.Shared.Models
{
    [Table("profiles")]
    public class Profiles : BaseModel
    {
        [PrimaryKey("id", false)]
        public string Id { get; set; } = string.Empty;

        [Column("username")]
        public string? Username { get; set; }

        [Column("email")]
        public string? Email { get; set; }

        [Column("created_at")]
        public DateTime? CreatedAt { get; set; }

        [Column("updated_at")]
        public DateTime? UpdatedAt { get; set; }
    }

    [Table("follows")]
    public class Follows : BaseModel
    {
        [Column("follower_id")]
        public string FollowerId { get; set; } = string.Empty;

        [Column("followee_id")]
        public string FolloweeId { get; set; } = string.Empty;

        [Column("created_at")]
        public DateTime? CreatedAt { get; set; }
    }

    [Table("posts_feed")]
    public class PostsFeed : BaseModel
    {
        [PrimaryKey("id", false)]
        public string Id { get; set; } = Guid.NewGuid().ToString();

        [Column("mongo_id")]
        public string MongoId { get; set; } = "";

        [Column("title")]
        public string Title { get; set; } = "";

        [Column("categories")]
        public List<string>? Categories { get; set; }

        [Column("image_url")]
        public string? ImageUrl { get; set; }

        [Column("author_id")]
        public string AuthorId { get; set; } = "";

        [Column("author_name")]
        public string? AuthorName { get; set; }

        [Column("created_at")]
        public DateTime CreatedAt { get; set; } = DateTime.UtcNow;
    }

    [Table("post_likes")]
    public class PostLike : BaseModel
    {
        [PrimaryKey("id")]
        public string Id { get; set; } = "";

        [Column("post_mongo_id")]
        public string PostMongoId { get; set; } = "";

        [Column("user_id")]
        public string UserId { get; set; } = "";

        [Column("created_at")]
        public DateTime? CreatedAt { get; set; }
    }

    [Table("post_comments")]
    public class PostComment : BaseModel
    {
        [PrimaryKey("id")]
        public string Id { get; set; } = "";

        [Column("post_mongo_id")]
        public string PostMongoId { get; set; } = "";

        [Column("user_id")]
        public string UserId { get; set; } = "";

        [Column("user_name")]
        public string? UserName { get; set; }

        [Column("content")]
        public string Content { get; set; } = "";

        [Column("created_at")]
        public DateTime? CreatedAt { get; set; }
    }
}