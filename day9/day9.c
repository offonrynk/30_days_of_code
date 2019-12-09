#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
  int factorialResult = 0;

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
  scanf("%d", &n);
  printf("%d", factorial(n));
  return 0;
}
