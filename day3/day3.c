#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  //!< if odd or even and between 6 & 20
  if ((n % 2 != 0) || ((n % 2 == 0) && (n >= 6 && n <= 20))) {
    printf("Weird\n");
  }

  //!< if even and constraints met
  if (n % 2 == 0) {
    if ((n >= 2 && n <= 6) || (n > 20)) {
      printf("Not Weird\n");
    }
  }

  return 0;
}
