#include <stdio.h>
#include <stdlib.h>

int maxConsecutiveOnes(int n)
{
  int count = 0;
  while (n != 0) {
    n = (n & (n << 1));
    ++count;
  }

  return count;
}

int main()
{
  int n;
  scanf("%d", &n);

  printf("%d\n", maxConsecutiveOnes(n));
  return 0;
}
