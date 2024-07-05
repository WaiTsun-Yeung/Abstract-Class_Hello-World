# Set the source files for the library
set(SOURCES private/hello_world.cpp)

# Create the static library
add_library(hello_world_class STATIC ${SOURCES})

# Set include directories for the library
target_include_directories(hello_world_class PUBLIC public)

target_link_libraries(
    hello_world_class PUBLIC
    printables
)