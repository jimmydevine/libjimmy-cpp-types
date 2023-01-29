#include <libjimmy/types/int.hpp>
#include <gtest/gtest.h>
#include <climits>


using namespace libjimmy::types;


TEST(IntTests, TestType) {
    Int value;
    ASSERT_EQ(typeid(value), typeid(signed long long));
}

TEST(IntTests, TestMaxValue) {
    Int value = LLONG_MAX;
	ASSERT_EQ(value, LLONG_MAX);
}

TEST(IntTests, TestMinValue) {
    Int value = LLONG_MIN;
	ASSERT_EQ(value, LLONG_MIN);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
