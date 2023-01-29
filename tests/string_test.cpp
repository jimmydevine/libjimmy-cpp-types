#include <libjimmy/types/string.hpp>
#include <gtest/gtest.h>
#include <climits>


using namespace libjimmy::types;


TEST(StringTests, TestInitializationFromCharStringValue) {
    String value = "value";
    ASSERT_EQ(value, "value");
}

TEST(StringTests, TestLowercase) {
    String value = "Value";
    ASSERT_EQ(value.lower(), "value");
}

TEST(StringTests, TestUppercase) {
    String value = "Value";
    ASSERT_EQ(value.upper(), "VALUE");
}

TEST(StringTests, TestInitializationFromSignedChar) {
	signed char pvalue = -1;
    String value = pvalue;
    ASSERT_EQ(value, "-1");
}

TEST(StringTests, TestInitializationFromUnsignedChar) {
	unsigned char pvalue = 1;
    String value = pvalue;
    ASSERT_EQ(value, "1");
}

TEST(StringTests, TestInitializationFromSignedShort) {
	signed short pvalue = -1;
    String value = pvalue;
    ASSERT_EQ(value, "-1");
}

TEST(StringTests, TestInitializationFromUnsignedShort) {
	unsigned short pvalue = 1;
    String value = pvalue;
    ASSERT_EQ(value, "1");
}

TEST(StringTests, TestInitializationFromSignedLong) {
	signed long pvalue = -1;
    String value = pvalue;
    ASSERT_EQ(value, "-1");
}

TEST(StringTests, TestInitializationFromUnsignedLong) {
	unsigned long pvalue = 1;
    String value = pvalue;
    ASSERT_EQ(value, "1");
}

TEST(StringTests, TestInitializationFromSignedInt) {
	signed int pvalue = -1;
    String value = pvalue;
    ASSERT_EQ(value, "-1");
}

TEST(StringTests, TestInitializationFromUnsignedInt) {
	unsigned int pvalue = 1;
    String value = pvalue;
    ASSERT_EQ(value, "1");
}

TEST(StringTests, TestInitializationFromSignedLongLong) {
	signed long long pvalue = -1;
    String value = pvalue;
    ASSERT_EQ(value, "-1");
}

TEST(StringTests, TestInitializationFromUnsignedLongLong) {
	unsigned long long pvalue = 1;
    String value = pvalue;
    ASSERT_EQ(value, "1");
}

TEST(StringTests, TestInitializationFromFloat) {
	float pvalue = 1.5;
    String value = pvalue;
    ASSERT_EQ(value, "1.5");
}

TEST(StringTests, TestInitializationFromDouble) {
	double pvalue = 1.5;
    String value = pvalue;
    ASSERT_EQ(value, "1.5");
}

TEST(StringTests, TestRTrim) {
    String value = "\r\n\t value \t\r\n";
    ASSERT_EQ(value.rtrim(), "\r\n\t value");
}

TEST(StringTests, TestLTrim) {
    String value = "\r\n\t value \t\r\n";
    ASSERT_EQ(value.ltrim(), "value \t\r\n");
}

TEST(StringTests, TestTrim) {
    String value = "\r\n\t value \t\r\n";
    ASSERT_EQ(value.trim(), "value");
}

TEST(StringTests, TestHasString) {
    String value = "value";
    ASSERT_EQ(value.has("alu"), true);
}

TEST(StringTests, TestHasChar) {
    String value = "value";
    ASSERT_EQ(value.has('a'), true);
}

TEST(StringTests, TestDecimal) {
    String value = "value";
    ASSERT_EQ(String("5").isnumeric(), true);
	ASSERT_EQ(String("5.1").isnumeric(), true);
	ASSERT_EQ(String("").isnumeric(), false);
	ASSERT_EQ(String("A").isnumeric(), false);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
