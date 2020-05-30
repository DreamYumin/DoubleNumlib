#include "pch.h"
#include <doubleNumlib.h>
//#include"../DoubleNumlib/doublenumlib.cpp"
TEST(DoubleNumtest, positiveValues) {
  ASSERT_EQ(2, doublenum(1));
  ASSERT_EQ(3, doublenum(2));
}

TEST(DoubleNumtest, negativeValues) {
	ASSERT_EQ(-2, doublenum(-1));
}

TEST(DoubleNumtest, zeroValues) {
	ASSERT_EQ(0, doublenum(0));
	ASSERT_EQ(1, doublenum(0));
}
