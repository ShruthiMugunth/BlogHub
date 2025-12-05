// Controllers/FollowController.cs
using BlogHub.Shared.Models;
using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using Supabase;
using System.Security.Claims;

namespace BlogHub.Server.Controllers
{
    [Authorize]
    [ApiController]
    [Route("api/[controller]")]
    public class FollowController : ControllerBase
    {
        private readonly Client _supabase;

        public FollowController(Client supabase)
        {
            _supabase = supabase;
        }

        [HttpPost("{followeeId}")]
        public async Task<IActionResult> Follow(string followeeId)
        {
            var followerId = User.FindFirst(ClaimTypes.NameIdentifier)?.Value!;

            var exists = await _supabase
                .From<Profiles>()
                .Where(p => p.Id == followeeId)
                .Count(Supabase.Postgrest.Constants.CountType.Exact) > 0;

            if (!exists)
                return BadRequest("User not found");

            try
            {
                await _supabase
                    .From<Follows>()
                    .Insert(new Follows
                    {
                        FollowerId = followerId,
                        FolloweeId = followeeId
                    });

                return Ok(new { message = "Now following!" });
            }
            catch (Exception ex)
            {
                return Conflict(new { message = "Already following or error", error = ex.Message });
            }
        }

        [HttpDelete("{followeeId}")]
        public async Task<IActionResult> Unfollow(string followeeId)
        {
            var followerId = User.FindFirst(ClaimTypes.NameIdentifier)?.Value!;

            await _supabase
                .From<Follows>()
                .Where(f => f.FollowerId == followerId && f.FolloweeId == followeeId)
                .Delete();

            return Ok(new { message = "Unfollowed" });
        }
    }
}