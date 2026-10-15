#include "arrayFuncs.h"
#include "utility.h"
#include <cstdlib>
#include <iostream>

int countEvens(int a[], int size) {
  int count = 0;
  for (int i = 0; i < size; ++i) {
    count += (isEven(a[i]) ? 1 : 0);
  }
  return count;
}
