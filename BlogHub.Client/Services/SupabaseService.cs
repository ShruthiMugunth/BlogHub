using Microsoft.AspNetCore.Components.Forms;
using System.Net.Http.Headers;

namespace BlogHub.Client.Services
{
    public class SupabaseService
    {
        private readonly HttpClient _http;
        private readonly string _supabaseUrl = "https://pcknnnjurlbkhoimzwgu.supabase.co";
        private readonly string _anonKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6InBja25ubmp1cmxia2hvaW16d2d1Iiwicm9sZSI6ImFub24iLCJpYXQiOjE3NjMzMjE1MzgsImV4cCI6MjA3ODY4MTUzOH0.E6s9O3-mIzdEGrLa0GpoPwrFgbEcQrq3mN5XFiBQLD4"; // From Supabase → Settings → API

        public SupabaseService(HttpClient http)
        {
            _http = http;
        }

        public async Task<string> UploadImageAsync(string bucket, string fileName, IBrowserFile file, string jwt)
        {
            var url = $"{_supabaseUrl}/storage/v1/object/{bucket}/{fileName}";

            using var content = new MultipartFormDataContent();
            using var stream = file.OpenReadStream(5 * 1024 * 1024);
            using var fileContent = new StreamContent(stream);
            fileContent.Headers.ContentType = new MediaTypeHeaderValue(file.ContentType);

            content.Add(fileContent, "file", file.Name);

            _http.DefaultRequestHeaders.Authorization = new AuthenticationHeaderValue("Bearer", jwt);
            _http.DefaultRequestHeaders.Remove("apikey");
            _http.DefaultRequestHeaders.Add("apikey", _anonKey);

            var response = await _http.PostAsync(url, content);
            if (!response.IsSuccessStatusCode)
            {
                var error = await response.Content.ReadAsStringAsync();
                throw new Exception($"Upload failed: {error}");
            }

            return $"{_supabaseUrl}/storage/v1/object/public/{bucket}/{fileName}";
        }
    }
}