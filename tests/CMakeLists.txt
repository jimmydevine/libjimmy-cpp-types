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

add_executable(array_test array_test.cpp)
target_link_libraries(array_test PRIVATE GTest::GTest)
add_test(array_tests array_test)

add_executable(object_test object_test.cpp)
target_link_libraries(object_test PRIVATE GTest::GTest)
add_test(object_tests object_test)

add_executable(ordered_object_test ordered_object_test.cpp)
target_link_libraries(ordered_object_test PRIVATE GTest::GTest)
add_test(ordered_object_tests ordered_object_test)

add_executable(sequence_test sequence_test.cpp)
target_link_libraries(sequence_test PRIVATE GTest::GTest)
add_test(sequence_tests sequence_test)

add_executable(binary_test binary_test.cpp)
target_link_libraries(binary_test PRIVATE GTest::GTest)
add_test(binary_tests binary_test)

add_executable(unicode_test unicode_test.cpp)
target_link_libraries(unicode_test PRIVATE GTest::GTest)
add_test(unicode_tests unicode_test)

add_executable(xml_test xml_test.cpp)
target_link_libraries(xml_test PRIVATE GTest::GTest)
add_test(xml_tests xml_test)

add_executable(types_test types_test.cpp)
target_link_libraries(types_test PRIVATE GTest::GTest)
add_test(types_tests types_test)
