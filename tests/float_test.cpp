#include <libjimmy/types/float.hpp>
#include <gtest/gtest.h>
#include <climits>


using namespace libjimmy::types;


TEST(FloatTests, TestType) {
    Float value;
    ASSERT_EQ(typeid(value), typeid(double));
}

TEST(FloatTests, TestMaxValue) {
    Float value = DBL_MAX;
	ASSERT_EQ(value, DBL_MAX);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
