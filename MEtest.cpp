// Test framework for multi-currency example
#include "gtest/gtest.h"

#include "Money.h"

TEST(MoneyTest, Multiplication) {
  Money five(5, Money::USD);
  Money product = five.times(2);
  EXPECT_EQ(Money(10, Money::USD), product);
  product = five.times(3);
  EXPECT_EQ(Money(15, Money::USD), product);
}

TEST(MoneyTest, Equality) {
  EXPECT_EQ(Money(5, Money::USD), Money(5, Money::USD));
  EXPECT_NE(Money(5, Money::USD), Money(6, Money::USD));
  EXPECT_EQ(Money(5, Money::CHF), Money(5, Money::CHF));
  EXPECT_NE(Money(5, Money::CHF), Money(6, Money::CHF));
  EXPECT_NE(Money(5, Money::CHF), Money(5, Money::USD));
}

TEST(MoneyTest, Currency) {
  EXPECT_EQ(Money::USD, Money(1, Money::USD).currency());
  EXPECT_EQ(Money::CHF, Money(1, Money::CHF).currency());
}
