#include <libjimmy/types/string_file.hpp>
#include <gtest/gtest.h>
#include <climits>



using namespace libjimmy::types;



TEST(StringFileTests, TestReadContent) {
    StringFile file = String("resources/stringfile_test1.txt");
	ASSERT_EQ(file.read(), String("test line 1\ntest line 2"));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

