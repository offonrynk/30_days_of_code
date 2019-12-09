#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    char s[10000];
    scanf("%s", s);

    // print even Index character
    for (int j = 0; j < strlen(s); j += 2) {
      printf("%c", s[j]);
    }
    printf(" ");

    // print odd Index character
    for (int k = 1; k < strlen(s); k += 2) {
      printf("%c", s[k]);
    }
    printf("\n");
  }

  return 0;
}
