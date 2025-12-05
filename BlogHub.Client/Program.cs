using BlogHub.Client;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using Supabase;
using Microsoft.Extensions.DependencyInjection; 
using System.Net.Http;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddHttpClient("ServerAPI", client =>
{
    client.BaseAddress = new Uri("https://localhost:7204/");
})
.AddHttpMessageHandler<AuthenticationHeaderHandler>();

builder.Services.AddScoped(sp =>
    sp.GetRequiredService<IHttpClientFactory>()
      .CreateClient("ServerAPI"));

builder.Services.AddScoped<AuthenticationHeaderHandler>();

var supabaseUrl = "https://pcknnnjurlbkhoimzwgu.supabase.co";
var supabaseKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6InBja25ubmp1cmxia2hvaW16d2d1Iiwicm9sZSI6ImFub24iLCJpYXQiOjE3NjMzMjE1MzgsImV4cCI6MjA3ODY4MTUzOH0.E6s9O3-mIzdEGrLa0GpoPwrFgbEcQrq3mN5XFiBQLD4";

var supabase = new Supabase.Client(supabaseUrl, supabaseKey);
await supabase.InitializeAsync();
builder.Services.AddSingleton(supabase);

await builder.Build().RunAsync();