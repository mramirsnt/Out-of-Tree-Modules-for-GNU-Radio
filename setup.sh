#!/bin/bash

# Create a new build directory and navigate into it
mkdir build
cd build

# Run CMake to configure the project
cmake ../

# Compile the project
make

# Install the compiled binaries (requires sudo privileges)
sudo make install

# Update the shared library cache
sudo ldconfig

# Print completion message
echo "Build and installation complete."

