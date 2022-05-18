# Declare cmake information
cmake_minimum_required(VERSION 2.8.10)
project(example)

# Copy csv file
configure_file(${CMAKE_SOURCE_DIR}/c.csv ${CMAKE_CURRENT_BINARY_DIR}/c.csv COPYONLY)

# Add library & classes
file(
    GLOB
    includes_library
    "classes/*.cpp"
    "classes/*.h"
)

# Add source code in project
add_executable(
    example
    main.cpp
    ${includes_library}
)
