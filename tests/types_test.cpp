#include <libjimmy/types.hpp>
#include <gtest/gtest.h>
#include <climits>


using namespace libjimmy::types;


TEST(TypesTests, TestBool) {
    Bool value;
}

TEST(TypesTests, TestCharacter) {
    Character value;
}

TEST(TypesTests, TestFloat) {
    Float value;
}

TEST(TypesTests, TestInt) {
    Int value;
}

TEST(TypesTests, TestString) {
    String value;
}

TEST(TypesTests, TestUInt) {
    UInt value;
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
