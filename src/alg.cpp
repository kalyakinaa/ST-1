// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value < 2) { return false; }
  for (uint64_t i = 2; i <= (uint64_t)sqrt(value); i++) {
    if (value % i == 0) { 
      return false; 
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n < 1) { return 0; }
  uint64_t num;
  for (num = 2; n > 0; num++) {
    if (checkPrime(num)) {
      n--;
    }
  }
  num--;
  return num;
}

uint64_t nextPrime(uint64_t value) {
  if (value < 1) {
    value = 1;
  }
  value++;
  while (!checkPrime(value)) {
    value++;
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t num = 2; num < hbound; num++) {
    if (checkPrime(num)) {
      sum += num;
    }
  }
  return sum;
}
