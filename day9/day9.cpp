#include <bits/stdc++.h>
#include <fstream>
#include <iostream>

int factorial(int n)
{
  int factorialResult;

  if (n <= 1) {
    factorialResult = 1;
  }

  else if ((n >= 2) && (n <= 12)) {
    factorialResult = n * factorial(n - 1);
  }

  return factorialResult;
}

int main()
{
  int n;
  std::cin >> n;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  int result = factorial(n);
  std::cout << result << std::endl;

  return 0;
}
