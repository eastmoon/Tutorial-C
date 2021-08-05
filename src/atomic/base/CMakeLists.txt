# Declare cmake information
cmake_minimum_required(VERSION 2.8.10)
project(example)

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

# Add thread package
find_package(Threads REQUIRED)
if(THREADS_HAVE_PTHREAD_ARG)
  set_property(TARGET example PROPERTY COMPILE_OPTIONS "-pthread")
  set_property(TARGET example PROPERTY INTERFACE_COMPILE_OPTIONS "-pthread")
endif()
if(CMAKE_THREAD_LIBS_INIT)
  target_link_libraries(example "${CMAKE_THREAD_LIBS_INIT}")
endif()
