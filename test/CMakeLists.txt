

# Enable ExternalProject CMake module
include(ExternalProject)

# Command to build gtest libraries
ExternalProject_Add(
        gtest
        URL /usr/src/gtest
        BINARY_DIR gtest
# Disable install step
        INSTALL_COMMAND ""
)

# Create a libgtest target to be used as a dependency by test programs
add_library(libgtest IMPORTED STATIC GLOBAL)
add_dependencies(libgtest gtest)

ExternalProject_Get_Property(gtest source_dir binary_dir)
set_target_properties(libgtest PROPERTIES
        "IMPORTED_LOCATION" "${binary_dir}/libgtest.a"
        "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
#    "INTERFACE_INCLUDE_DIRECTORIES" "${source_dir}/include"
)
# I couldn't make it work with INTERFACE_INCLUDE_DIRECTORIES
include_directories("${source_dir}/include")


set(SOURCE_FILES main.cpp LinkedListTest.cpp)
add_executable(TEST ${SOURCE_FILES})

target_link_libraries(TEST pthread libgtest linkedList)