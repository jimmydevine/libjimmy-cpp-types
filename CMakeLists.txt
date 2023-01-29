cmake_minimum_required (VERSION 3.0)
project (libjimmy-cpp-types VERSION 0.0.2)

set (CMAKE_CXX_STANDARD 17)

install(
    DIRECTORY ${PROJECT_SOURCE_DIR}/include/libjimmy 
    DESTINATION include
)

enable_testing()
add_subdirectory(tests)

SET(CPACK_GENERATOR "DEB")
SET(CPACK_PACKAGE_NAME "libjimmy-cpp-types-dev")
SET(CPACK_SYSTEM_NAME "all")
SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "Jimmy Devine")
INCLUDE(CPack)

