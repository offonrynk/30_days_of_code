#include <stdio.h>
#include <stdlib.h>

int main()
{
  int t;
  scanf("%d", &t);

  for (int t_itr = 0; t_itr < t; t_itr++) {
    int n, k;
    scanf("%d %d", &n, &k);

    int maxVal = 0;
    for (int i = 1; i < n; ++i) {
      for (int j = i + 1; j <= n; ++j) {
        if (((i & j) < k) && ((i & j) > maxVal))
          maxVal = i & j;
      }
    }
    printf("%d\n", maxVal);
  }
  return 0;
}
