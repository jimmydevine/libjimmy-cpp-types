#include <libjimmy/types/sequence.hpp>
#include <gtest/gtest.h>



using namespace libjimmy::types;



TEST(SequenceTests, TestSequenceInitialization) {
    Sequence<int> s;
	ASSERT_EQ(s.empty(), true);
}

TEST(SequenceTests, TestSequenceInitializationFromList) {
    Sequence<int> s({ 1, 2, 3 });
	ASSERT_EQ(s.empty(), false);
	ASSERT_EQ(s.size(), 3);
	ASSERT_EQ(s.front(), 1);
	ASSERT_EQ(s.front()->next, 2);
	ASSERT_EQ(s.back()->last, 2);
	ASSERT_EQ((const int)s.back(), 3);
}

TEST(SequenceTests, TestSequenceAppend) {
    Sequence<int> s;
	s.append(5);
	s.append(6);
	ASSERT_EQ(s.front(), 5);
	ASSERT_EQ(s.back(), 6);
}

TEST(SequenceTests, TestSequencePush) {
    Sequence<int> s;
	s.push(5);
	s.push(6);
	ASSERT_EQ(s.front(), 5);
	ASSERT_EQ(s.back(), 6);
}

TEST(SequenceTests, TestSequenceInsert) {
    Sequence<int> s;
	s.insert(5);
	s.insert(6);
	ASSERT_EQ(s.front(), 6);
	ASSERT_EQ(s.back(), 5);
}

TEST(SequenceTests, TestSequenceUnshift) {
    Sequence<int> s;
	s.unshift(5);
	s.unshift(6);
	ASSERT_EQ(s.front(), 6);
	ASSERT_EQ(s.back(), 5);
}

TEST(SequenceTests, TestSequencePop) {
    Sequence<int> s = { 1, 2, 3 };
	s.pop();
	ASSERT_EQ(s.size(), 2);
	ASSERT_EQ(s.front(), 1);
	ASSERT_EQ(s.back(), 2);
}

TEST(SequenceTests, TestSequenceShift) {
    Sequence<int> s = { 1, 2, 3 };
	s.shift();
	ASSERT_EQ(s.size(), 2);
	ASSERT_EQ(s.front(), 2);
	ASSERT_EQ(s.back(), 3);
}

TEST(SequenceTests, TestSequenceDetach) {
    Sequence<int> s = { 1, 2, 3 };
	s.front()->next->detach();
	ASSERT_EQ(s.size(), 2);
	ASSERT_EQ(s.front(), 1);
	ASSERT_EQ(s.back(), 3);
}

TEST(SequenceTests, TestSequenceMoveBackToFront) {
    Sequence<int> s = { 1, 2, 3 };
	s.insert(s.pop());
	ASSERT_EQ(s.size(), 3);
	ASSERT_EQ(s.front(), 3);
	ASSERT_EQ(s.back(), 2);
}

TEST(SequenceTests, TestSequenceMoveFrontToBack) {
    Sequence<int> s = { 1, 2, 3 };
	s.append(s.shift());
	ASSERT_EQ(s.size(), 3);
	ASSERT_EQ(s.front(), 2);
	ASSERT_EQ(s.back(), 1);
}

TEST(SequenceTests, TestSequenceIterationByValue) {
	int values[] = { 1, 2, 3 };
    Sequence<int> s = { 1, 2, 3 };
	int i = 0;
	for (auto item : s)
	{
		ASSERT_EQ(item, values[i++]);
	}
}

TEST(SequenceTests, TestEquals) {
	int values[] = { 1, 2, 3 };
    Sequence<int> s;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		s.append(values[i]);
	}
	i = 0;
	for (auto item : s)
	{
		ASSERT_EQ(item, values[i++]);
	}
}



int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


