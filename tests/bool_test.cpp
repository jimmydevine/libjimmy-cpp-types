#include <libjimmy/types/bool.hpp>
#include <gtest/gtest.h>
#include <climits>


using namespace libjimmy::types;


TEST(BoolTests, TestType) {
    Bool value;
    ASSERT_EQ(typeid(value), typeid(bool));
}

TEST(BoolTests, TestTrueValue) {
    Bool value = true;
	ASSERT_EQ(value, true);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
