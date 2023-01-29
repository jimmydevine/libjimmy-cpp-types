#include <libjimmy/types/character.hpp>
#include <gtest/gtest.h>
#include <climits>


using namespace libjimmy::types;


TEST(CharacterTests, TestType) {
    Character value;
    ASSERT_EQ(typeid(value), typeid(char));
}

TEST(CharacterTests, TestAsciiValue) {
    Character value = '~';
	ASSERT_EQ(value, '~');
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
