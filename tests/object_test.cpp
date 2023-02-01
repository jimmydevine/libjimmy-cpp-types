#include <libjimmy/types/object.hpp>
#include <gtest/gtest.h>
#include <climits>



using namespace libjimmy::types;



TEST(ObjectTests, TestInitializationWithIntValues) {
    Object<int, int> value = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
    ASSERT_EQ(value.size(), 3);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

