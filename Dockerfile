# =========================
# Build Client
# =========================
FROM mcr.microsoft.com/dotnet/sdk:9.0 AS client-build
WORKDIR /src

COPY BlogHub.Client/BlogHub.Client.csproj BlogHub.Client/
COPY BlogHub.Shared/BlogHub.Shared.csproj BlogHub.Shared/
RUN dotnet restore BlogHub.Client/BlogHub.Client.csproj

COPY BlogHub.Client BlogHub.Client
COPY BlogHub.Shared BlogHub.Shared
RUN dotnet publish BlogHub.Client/BlogHub.Client.csproj -c Release -o /client/publish

# =========================
# Build Server
# =========================
FROM mcr.microsoft.com/dotnet/sdk:9.0 AS server-build
WORKDIR /src

COPY BlogHub.Server/BlogHub.Server.csproj BlogHub.Server/
COPY BlogHub.Shared/BlogHub.Shared.csproj BlogHub.Shared/
RUN dotnet restore BlogHub.Server/BlogHub.Server.csproj

COPY BlogHub.Server BlogHub.Server
COPY BlogHub.Shared BlogHub.Shared

# 🔥 COPY CLIENT STATIC FILES INTO SERVER wwwroot
COPY --from=client-build /client/publish/wwwroot BlogHub.Server/wwwroot

RUN dotnet publish BlogHub.Server/BlogHub.Server.csproj -c Release -o /app/publish /p:UseAppHost=false

# =========================
# Runtime
# =========================
FROM mcr.microsoft.com/dotnet/aspnet:9.0
WORKDIR /app
COPY --from=server-build /app/publish .

EXPOSE 8080
ENTRYPOINT ["dotnet", "BlogHub.Server.dll"]
