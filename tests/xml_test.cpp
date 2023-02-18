#include <libjimmy/types/xml.hpp>
#include <gtest/gtest.h>



using namespace libjimmy::types;



TEST(XMLTests, TestEmptyInitialization) {
    XML xml;
    ASSERT_EQ(xml.name(), "");
	ASSERT_EQ(xml.children().size(), 0);
}

TEST(XMLTests, TestStringInitialization) {
    XML xml("<xml/>");
    ASSERT_EQ(xml.name(), "xml");
	ASSERT_EQ(xml.children().size(), 0);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


