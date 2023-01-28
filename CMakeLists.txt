cmake_minimum_required (VERSION 2.6)
project (libjimmy-cpp-types)

set (CMAKE_CXX_STANDARD 17)

install(
    DIRECTORY ${PROJECT_SOURCE_DIR}/include/libjimmy 
    DESTINATION include
)

enable_testing()
add_subdirectory(tests)
