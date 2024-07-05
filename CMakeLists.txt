cmake_minimum_required(VERSION 3.12)
project(hello-world)

set(CMAKE_BUILD_TYPE RelWithDebInfo)

if(UNIX)
    # Enable profiling with gprof
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pg")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -pg")
endif(UNIX)

add_subdirectory(libs/Printables)
add_subdirectory(libs/HelloWorld)

# Add the executable
add_executable(hello_world apps/hello_world.cpp)

# Set C++ standard
set_target_properties(hello_world PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

# Link the libraries
target_link_libraries(
    hello_world PRIVATE
    hello_world_class
)