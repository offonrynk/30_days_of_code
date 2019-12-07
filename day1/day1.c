#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 4;
  double d = 4.0;
  char s[] = "HackerRank ";

  int intVar;
  double doubleVar;
  char stringVar[1000];

  scanf("%d", &intVar);
  scanf("%lf", &doubleVar);
  getchar();
  scanf("%[^\n]", &stringVar);

  printf("%d\n", (i + intVar));
  printf("%0.1lf\n", (d + doubleVar));
  printf("%s%s", s, stringVar);

  getchar();
  return 0;
}
