cmake_minimum_required (VERSION 2.6)
project (libjimmy-cpp-types-dev)

set (CMAKE_CXX_STANDARD 17)

install(
    DIRECTORY ${PROJECT_SOURCE_DIR}/include/libjimmy 
    DESTINATION include
)

enable_testing()
add_subdirectory(tests)

SET(CPACK_GENERATOR "DEB")
SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "Jimmy Devine")
INCLUDE(CPack)