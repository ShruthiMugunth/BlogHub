# Build stage: Restore and publish
FROM mcr.microsoft.com/dotnet/sdk:9.0 AS build
WORKDIR /src
COPY ["BlogHub.sln", "."]
COPY ["BlogHub.Server/BlogHub.Server.csproj", "BlogHub.Server/"]
COPY ["BlogHub.Client/BlogHub.Client.csproj", "BlogHub.Client/"]
COPY ["BlogHub.Shared/BlogHub.Shared.csproj", "BlogHub.Shared/"]
RUN dotnet restore "BlogHub.Server/BlogHub.Server.csproj"
COPY . .
WORKDIR /src/BlogHub.Server
RUN dotnet publish "BlogHub.Server.csproj" -c Release -o /app/publish /p:UseAppHost=false

# Runtime stage: Small ASP.NET image
FROM mcr.microsoft.com/dotnet/aspnet:9.0 AS runtime
WORKDIR /app
COPY --from=build /app/publish .

# Expose port 8080 (Fly.io default)
EXPOSE 8080

ENTRYPOINT ["dotnet", "BlogHub.Server.dll"]
