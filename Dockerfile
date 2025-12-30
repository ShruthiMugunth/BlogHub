# ---------- BUILD STAGE ----------
FROM mcr.microsoft.com/dotnet/sdk:9.0 AS build
WORKDIR /src

# Copy solution and project files
COPY BlogHub.sln .
COPY BlogHub.Server/BlogHub.Server.csproj BlogHub.Server/
COPY BlogHub.Client/BlogHub.Client.csproj BlogHub.Client/
COPY BlogHub.Shared/BlogHub.Shared.csproj BlogHub.Shared/

# Restore dependencies
RUN dotnet restore

# Copy everything else
COPY . .

# Publish Server (this also builds Client automatically)
WORKDIR /src/BlogHub.Server
RUN dotnet publish -c Release -o /app/publish /p:UseAppHost=false

# ---------- RUNTIME STAGE ----------
FROM mcr.microsoft.com/dotnet/aspnet:9.0
WORKDIR /app

COPY --from=build /app/publish .

EXPOSE 8080
ENV ASPNETCORE_URLS=http://+:8080

ENTRYPOINT ["dotnet", "BlogHub.Server.dll"]
