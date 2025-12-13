#!/bin/bash

# Install .NET SDK
echo "Installing .NET SDK..."
curl -sSL https://dot.net/v1/dotnet-install.sh | bash /dev/stdin --channel 9.0

# Add to PATH
export PATH="$PATH:$HOME/.dotnet"
export DOTNET_ROOT=$HOME/.dotnet

# Install workloads
echo "Installing workloads..."
dotnet workload install wasm-tools

# Publish the Server project
echo "Publishing the project..."
dotnet publish BlogHub.Server/BlogHub.Server.csproj -c Release -o publish-output

# Copy static files to build directory
echo "Copying static assets..."
mkdir -p build/wwwroot

# .NET 9 location: files directly in publish-output/
if ls publish-output/index.html >/dev/null 2>&1; then
    cp -r publish-output/* build/wwwroot/
    echo "Copied static files from publish-output/ (standard for .NET 9 hosted)."
# Fallback for older .NET versions
elif [ -d publish-output/wwwroot ]; then
    cp -r publish-output/wwwroot/* build/wwwroot/
    echo "Copied from publish-output/wwwroot/."
else
    echo "Error: No static files found!"
    exit 1
fi

# Verify
if [ ! -f build/wwwroot/index.html ]; then
    echo "Error: index.html missing in build/wwwroot!"
    exit 1
fi

echo "Build completed — ready for static deployment!"