#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int arr[6][6];
  for (int x = 0; x < 6; x++) {
    for (int y = 0; y < 6; y++) {
      scanf("%d", &arr[x][y]);
    }
  }

  int max = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int sum = 0;
      sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] +
            arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
      if (i == 0 && j == 0) {
        max = sum;
      }

      if (sum > max) {
        max = sum;
      }
    }
  }

  printf("%d\n", max);

  return 0;
}
