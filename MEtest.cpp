// Test framework for multi-currency example
#include "gtest/gtest.h"

#include "Dollar.h"

TEST(MoneyTest, Multiplication) {
  Dollar five(5);
  Dollar product = five.times(2);
  EXPECT_EQ(10, product.amount);
  product = five.times(3);
  EXPECT_EQ(15, product.amount);
}

