#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n, int *numOfSwaps)
{
  int numberOfSwaps = 0;
  bool swapped = false;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int tempArr = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tempArr;
        swapped = true;
        numberOfSwaps++;
      }
    }
    if (swapped == false) {
      break;
    }
  }

  *numOfSwaps = numberOfSwaps;
}

int main()
{
  int n;
  scanf("%d", &n);
  int *a = malloc(sizeof(int) * n);
  for (int a_i = 0; a_i < n; a_i++) {
    scanf("%d", &a[a_i]);
  }

  int numOfSwaps;
  bubbleSort(a, n, &numOfSwaps);

  printf("Array is sorted in %d swaps.\n", numOfSwaps);
  printf("First Element: %d\n", a[0]);
  printf("Last Element: %d\n", a[n - 1]);

  free(a);

  return 0;
}
