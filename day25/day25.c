#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool numIsPrime(const int n)
{
  if (n == 1)
    return false;

  bool isPrime = true;
  int num = sqrt(n);
  for (int i = 2; i <= num; ++i) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

int main()
{
  int numOfTestCases;
  scanf("%d", &numOfTestCases);

  for (int i = 0; i < numOfTestCases; ++i) {
    int n;
    scanf("%d", &n);

    if (numIsPrime(n))
      printf("Prime\n");
    else
      printf("Not prime\n");
  }

  return 0;
}
