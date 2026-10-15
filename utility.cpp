#include <iostream>
// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

bool isOdd(int x) { 
  return ((x & 1) == 1);
}

bool isEven(int x) { 
  return ((x & 1) == 0);
}

bool isPrime(int x) { 
  if (x <= 1) return false;

  int half = (x / 2);

  for (int i = 2; i <= half; ++i) {
    if (x % i == 0) return false;
  }

  return true;
}
