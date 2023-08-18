cmake_minimum_required(VERSION 3.12)
project(project_dir)

# Add include directories
include_directories(include)

# Add sources to be compiled
add_executable(program src/main.cpp src/print.cpp)

# Add library sources
add_library(write_in_file STATIC library/WriteInFile.cpp)

# Link the static library to the executable
target_link_libraries(program write_in_file)
