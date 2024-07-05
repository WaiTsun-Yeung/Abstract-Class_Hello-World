# Set the source files for the library
set(SOURCES private/printables.cpp)

# Create the static library
add_library(printables STATIC ${SOURCES})

# Set include directories for the library
target_include_directories(printables PUBLIC public)