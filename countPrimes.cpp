#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
  int count = 0;
  for (int i = 0; i < size; ++i) {
    count += (isPrime(a[i]) ? 1 : 0);
  }
  return count;
}
