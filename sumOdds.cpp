#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
  int total = 0;
  for (int i = 0; i < size; ++i) {
    total += (isOdd(a[i]) ? a[i] : 0);
  }
  return total;
}
