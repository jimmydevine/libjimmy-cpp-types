#include <libjimmy/types/array.hpp>
#include <gtest/gtest.h>
#include <climits>



using namespace libjimmy::types;



TEST(ArrayTests, TestInitializationWithIntValues) {
    Array<int> value = { 1, 2, 3 };
    ASSERT_EQ(value.size(), 3);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

