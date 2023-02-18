#include <libjimmy/types/ordered_object.hpp>
#include <gtest/gtest.h>
#include <climits>



using namespace libjimmy::types;



TEST(OrderedObjectTests, TestInitializationWithIntValues) {
	int values[3][2] = { { 6, 5 }, { 4, 3 }, { 2, 1 } };
    OrderedObject<int, int> value({ { 6, 5 }, { 4, 3 }, { 2, 1 } });
    ASSERT_EQ(value.size(), 3);
	int i = 0;
	for (auto kv : value)
	{
		ASSERT_EQ(kv.first, values[i][0]);
		ASSERT_EQ(kv, values[i][1]);
		i++;
	}
	i = 0;
	for (auto const& [key, val] : value)
	{
		ASSERT_EQ(key, values[i][0]);
		ASSERT_EQ(val, values[i][1]);
		i++;
	}
}
/*
TEST(OrderedObjectTests, TestInitializationWithIntValues2) {
	int values[3][2] = { { 6, 5 }, { 4, 3 }, { 2, 1 } };
    OrderedObject<int, int> value = { { 6, 5 }, { 4, 3 }, { 2, 1 } };
	ASSERT_EQ(value.size(), 3);
    int i = 0;
	for (auto kv : value)
	{
		ASSERT_EQ(kv.key, values[i][0]);
		ASSERT_EQ(kv.value, values[i][1]);
		i++;
	}
}
*/
TEST(OrderedObjectTests, TestInsert) {
	int i;
	int values[3][2] = { { 6, 5 }, { 4, 3 }, { 2, 1 } };
    OrderedObject<int, int> value;
	for (i = 0; i < 3; i++)
	{
		value[values[i][0]] = values[i][1];
	}
	ASSERT_EQ(value.size(), 3);
	i = 0;
	for (auto const& [key, val] : value)
	{
		ASSERT_EQ(key, values[i][0]);
		ASSERT_EQ(val, values[i][1]);
		i++;
	}
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

