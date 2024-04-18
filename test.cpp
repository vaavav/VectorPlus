#include "pch.h"
#include "C:\Users\Andrey\source\repos\VectorPlus\Header.h"

TEST(TestCaseName, test1) {
	vector<int> v1 = { 2, 3, 4 }, v2 = { 1, 2, 3 };
	ASSERT_EQ(v1, VecP(v2, 1));
}

TEST(TestCaseName, test2) {
	vector<int> v1 = { 5, 5 }, v2 = { 1, 2, 3 };
	ASSERT_NE(v1, VecP(v2, 1));
}

TEST(TestCaseName, test3) {
	vector<int> v1 = { 5, 5 }, v2 = { 1, 1 };
	ASSERT_EQ(v1, VecP(v2, 4));
}