using BlogHub.Server.Models;
using BlogHub.Server.Services;
using BlogHub.Shared.Models;
using Microsoft.AspNetCore.Authentication.JwtBearer;
using Microsoft.Extensions.Options;
using Microsoft.OpenApi.Models;
using MongoDB.Driver;
using Supabase;
using Microsoft.IdentityModel.Tokens;
using System.Text;

var builder = WebApplication.CreateBuilder(args);

builder.Services.AddCors(options =>
{
    options.AddPolicy("AllowBlazor", policy =>
    {
        policy.WithOrigins("https://localhost:7010")
              .AllowAnyMethod()
              .AllowAnyHeader()
              .AllowCredentials()
              .SetIsOriginAllowed(_ => true)           
              .WithExposedHeaders("*");
    });
});

builder.Services.Configure<MongoDbSettings>(builder.Configuration.GetSection("MongoDbSettings"));
builder.Services.AddSingleton<IMongoClient>(sp =>
    new MongoClient(sp.GetRequiredService<IOptions<MongoDbSettings>>().Value.ConnectionString));
builder.Services.AddScoped(sp => sp.GetRequiredService<IMongoClient>().GetDatabase("MyBlogSpace"));
builder.Services.AddScoped<MongoService>();

var supabaseUrl = "https://pcknnnjurlbkhoimzwgu.supabase.co";
var supabaseAnonKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6InBja25ubmp1cmxia2hvaW16d2d1Iiwicm9sZSI6ImFub24iLCJpYXQiOjE3NjMzMjE1MzgsImV4cCI6MjA3ODY4MTUzOH0.E6s9O3-mIzdEGrLa0GpoPwrFgbEcQrq3mN5XFiBQLD4";
var supabaseServiceKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6InBja25ubmp1cmxia2hvaW16d2d1Iiwicm9sZSI6InNlcnZpY2Vfcm9sZSIsImlhdCI6MTc2MzMyMTUzOCwiZXhwIjoyMDc4NjgxNTM4fQ.YMZra26YtcR4e1AO0TONy1-TR2xhVbxZ5WzvLMIOArQ";

var supabaseAnon = new Client(supabaseUrl, supabaseAnonKey, new SupabaseOptions { AutoRefreshToken = true, AutoConnectRealtime = true });
await supabaseAnon.InitializeAsync();
builder.Services.AddSingleton(supabaseAnon);

var supabaseAdmin = new Client(supabaseUrl, supabaseServiceKey, new SupabaseOptions { AutoConnectRealtime = true });
await supabaseAdmin.InitializeAsync();
builder.Services.AddSingleton(supabaseAdmin);

var supabaseJwtSecret = builder.Configuration["SecuritySettings:Key"];

builder.Services.AddAuthentication(JwtBearerDefaults.AuthenticationScheme)
    .AddJwtBearer(options =>
    {
        options.TokenValidationParameters = new TokenValidationParameters
        {
            ValidateIssuer = true,
            ValidIssuer = "https://pcknnnjurlbkhoimzwgu.supabase.co/auth/v1",
            ValidateAudience = false,
            ValidateLifetime = true,
            ValidateIssuerSigningKey = true,
            IssuerSigningKey = new SymmetricSecurityKey(Encoding.UTF8.GetBytes(supabaseJwtSecret)),
            ClockSkew = TimeSpan.FromMinutes(60)
        };
    });

builder.Services.AddAuthorization();
builder.Services.AddControllers();
builder.Services.AddEndpointsApiExplorer();
builder.Services.AddSwaggerGen(c =>
{
    c.SwaggerDoc("v1", new OpenApiInfo { Title = "BlogHub API", Version = "v1" });

    var securityScheme = new OpenApiSecurityScheme
    {
        Name = "Authorization",
        Description = "Enter: Bearer {token}",
        In = ParameterLocation.Header,
        Type = SecuritySchemeType.Http,
        Scheme = "bearer",
        BearerFormat = "JWT",
        Reference = new OpenApiReference { Type = ReferenceType.SecurityScheme, Id = "Bearer" }
    };
    c.AddSecurityDefinition("Bearer", securityScheme);
    c.AddSecurityRequirement(new OpenApiSecurityRequirement
    {
        { new OpenApiSecurityScheme { Reference = new OpenApiReference { Type = ReferenceType.SecurityScheme, Id = "Bearer" } }, Array.Empty<string>() }
    });
});

var app = builder.Build();

app.UseSwagger();
app.UseSwaggerUI();
app.UseHttpsRedirection();

app.UseStaticFiles();          
app.UseRouting();

app.UseCors("AllowBlazor");
app.UseAuthentication();
app.UseAuthorization();

app.MapControllers();
app.MapFallbackToFile("index.html");  

app.Lifetime.ApplicationStarted.Register(() =>
{
    Task.Delay(1200).ContinueWith(_ =>
    {
        try
        {
            var url = "https://localhost:7204/swagger";
            System.Diagnostics.Process.Start(new System.Diagnostics.ProcessStartInfo { FileName = url, UseShellExecute = true });
        }
        catch { }
    });
});

app.Run();