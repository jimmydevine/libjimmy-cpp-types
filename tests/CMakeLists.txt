find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(string_test string_test.cpp)
target_link_libraries(string_test PRIVATE GTest::GTest)
add_test(string_tests string_test)

add_executable(float_test float_test.cpp)
target_link_libraries(float_test PRIVATE GTest::GTest)
add_test(float_tests float_test)

add_executable(int_test int_test.cpp)
target_link_libraries(int_test PRIVATE GTest::GTest)
add_test(int_tests int_test)

add_executable(uint_test uint_test.cpp)
target_link_libraries(uint_test PRIVATE GTest::GTest)
add_test(uint_tests uint_test)

add_executable(character_test character_test.cpp)
target_link_libraries(character_test PRIVATE GTest::GTest)
add_test(character_tests character_test)

add_executable(bool_test bool_test.cpp)
target_link_libraries(bool_test PRIVATE GTest::GTest)
add_test(bool_tests bool_test)
