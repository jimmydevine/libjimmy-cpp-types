#include <libjimmy/types/uint.hpp>
#include <gtest/gtest.h>
#include <climits>


using namespace libjimmy::types;


TEST(UIntTests, TestType) {
    UInt value;
    ASSERT_EQ(typeid(value), typeid(unsigned long long));
}

TEST(UIntTests, TestMaxValue) {
    UInt value = ULLONG_MAX;
	ASSERT_EQ(value, ULLONG_MAX);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
