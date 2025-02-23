// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(checkPrimeTests, CheckTwoIsPrime) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(checkPrimeTests, CheckThreeIsPrime) {
  EXPECT_TRUE(checkPrime(3));
}

TEST(checkPrimeTests, CheckThirteenIsPrime) {
  EXPECT_TRUE(checkPrime(13));
}

TEST(checkPrimeTests, CheckNinetySevenIsPrime) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(checkPrimeTests, CheckFourHundredNinetyNineIsPrime) {
  EXPECT_TRUE(checkPrime(499));
}

TEST(checkPrimeTests, CheckZeroIsNotPrime) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(checkPrimeTests, CheckOneIsNotPrime) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(checkPrimeTests, CheckFourIsNotPrime) {
  EXPECT_FALSE(checkPrime(4));
}

TEST(checkPrimeTests, CheckFortyFourIsNotPrime) {
  EXPECT_FALSE(checkPrime(49));
}

TEST(nPrimeTests, FirstPrimeIsTwo) {
  uint64_t res = nPrime(0);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(nPrimeTests, FourthPrimeIsSeven) {
  uint64_t res = nPrime(4);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}

TEST(nPrimeTests, HundredthPrimeIsFourHundredSixtyThree) {
  uint64_t res = nPrime(100);
  uint64_t expected = 463;
  EXPECT_EQ(expected, res);
}

TEST(nextPrimeTests, NextPrimeAfterZeroIsTwo) {
  uint64_t res = nextPrime(0);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(nextPrimeTests, NextPrimeAfterOneIsTwo) {
  uint64_t res = nextPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(nextPrimeTests, NextPrimeAfterFiveIsSeven) {
  uint64_t res = nextPrime(5);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}

TEST(nextPrimeTests, NextPrimeAfterSixIsSeven) {
  uint64_t res = nextPrime(6);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}

TEST(nextPrimeTests, NextPrimeAfterNinetyNineIsOneHundredAndOne) {
  uint64_t res = nextPrime(99);
  uint64_t expected = 101;
  EXPECT_EQ(expected, res);
}

TEST(sumPrimeTests, SumPrimeNumbersBelowFifteen) {
  uint64_t res = sumPrime(15);
  uint64_t expected = 41;
  EXPECT_EQ(expected, res);
}

TEST(sumPrimeTests, SumPrimeNumbersBelowOneHundred) {
  uint64_t res = sumPrime(100);
  uint64_t expected = 1060;
  EXPECT_EQ(expected, res);
}

TEST(sumPrimeTests, SumPrimeNumbersBelowZero) {
  uint64_t res = sumPrime(0);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(sumPrimeTests, CheckBoundIsNotIncludedInSum) {
  uint64_t res = sumPrime(5);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}
