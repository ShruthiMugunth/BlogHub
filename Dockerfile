# Build stage
FROM mcr.microsoft.com/dotnet/sdk:9.0 AS build
WORKDIR /src

COPY BlogHub.Server/BlogHub.Server.csproj BlogHub.Server/
COPY BlogHub.Client/BlogHub.Client.csproj BlogHub.Client/
COPY BlogHub.Shared/BlogHub.Shared.csproj BlogHub.Shared/

RUN dotnet restore BlogHub.Server/BlogHub.Server.csproj

COPY . .

# 🔥 Publish ONLY the Server project
RUN dotnet publish BlogHub.Server/BlogHub.Server.csproj -c Release -o /app/publish /p:UseAppHost=false

# Runtime stage
FROM mcr.microsoft.com/dotnet/aspnet:9.0 AS runtime
WORKDIR /app
COPY --from=build /app/publish .

EXPOSE 8080
ENTRYPOINT ["dotnet", "BlogHub.Server.dll"]
