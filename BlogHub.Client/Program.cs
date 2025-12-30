using BlogHub.Client;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using Supabase;
using Microsoft.Extensions.DependencyInjection;

var builder = WebAssemblyHostBuilder.CreateDefault(args);

builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

// HTTP client
builder.Services.AddScoped(sp =>
    new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });

// Supabase (Anon key only)
var supabaseUrl = builder.Configuration["Supabase:Url"] ?? "https://pcknnnjurlbkhoimzwgu.supabase.co";
var supabaseKey = builder.Configuration["Supabase:AnonKey"] ?? "<Your Anon Key>";
var supabase = new Supabase.Client(supabaseUrl, supabaseKey, new SupabaseOptions
{
    AutoConnectRealtime = false // Disable Realtime for now if causing issues
});
await supabase.InitializeAsync();
builder.Services.AddSingleton(supabase);

await builder.Build().RunAsync();
