# Build stage
FROM mcr.microsoft.com/dotnet/sdk:9.0 AS build
WORKDIR /src

COPY BlogHub.sln .
COPY BlogHub.Server/BlogHub.Server.csproj BlogHub.Server/
COPY BlogHub.Client/BlogHub.Client.csproj BlogHub.Client/
COPY BlogHub.Shared/BlogHub.Shared.csproj BlogHub.Shared/

RUN dotnet restore

COPY . .

# 🔴 THIS IS THE IMPORTANT LINE
RUN dotnet publish BlogHub.sln -c Release -o /app/publish /p:UseAppHost=false

# Runtime stage
FROM mcr.microsoft.com/dotnet/aspnet:9.0 AS runtime
WORKDIR /app
COPY --from=build /app/publish .

EXPOSE 8080
ENTRYPOINT ["dotnet", "BlogHub.Server.dll"]
