find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(string_test string_test.cpp)
target_link_libraries(string_test PRIVATE GTest::GTest)
add_test(string_gtests string_test)