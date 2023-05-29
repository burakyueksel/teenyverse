cmake_minimum_required(VERSION 3.10)
project(PhysicsSimulation)

set(CMAKE_CXX_STANDARD 11)

# Set the include directories
include_directories(include)

# Add the source files
set(SOURCES src/object.cpp src/main.cpp)

# Create the executable
add_executable(PhysicsSimulation ${SOURCES})
