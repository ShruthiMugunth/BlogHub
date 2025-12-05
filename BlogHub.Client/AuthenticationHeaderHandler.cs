using Supabase; 
using System.Net.Http;
using System.Net.Http.Headers;
using Microsoft.AspNetCore.Components;

namespace BlogHub.Client
{
    public class AuthenticationHeaderHandler : DelegatingHandler
    {
        private readonly Supabase.Client _supabase;
        private readonly NavigationManager _navigation;

        public AuthenticationHeaderHandler(Supabase.Client supabase, NavigationManager navigation)
        {
            _supabase = supabase;
            _navigation = navigation;
        }

        protected override async Task<HttpResponseMessage> SendAsync(
            HttpRequestMessage request, CancellationToken cancellationToken)
        {
            var token = _supabase.Auth.CurrentSession?.AccessToken;
            if (!string.IsNullOrEmpty(token))
            {
                request.Headers.Authorization = new AuthenticationHeaderValue("Bearer", token);
            }

            var response = await base.SendAsync(request, cancellationToken);

            if (response.StatusCode == System.Net.HttpStatusCode.Unauthorized)
            {
                _navigation.NavigateTo("/login");
            }

            return response;
        }
    }
}