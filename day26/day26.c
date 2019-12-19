#include <stdio.h>
#include <stdlib.h>

int main()
{
  int day, month, year;
  scanf("%d%d%d", &day, &month, &year);

  int dayExpected, monthExpected, yearExpected;
  scanf("%d%d%d", &dayExpected, &monthExpected, &yearExpected);

  int fine = 0;
  if (year > yearExpected) {
    fine = 10000;
  }
  else if (year == yearExpected) {
    if (month > monthExpected) {
      fine = 500 * (month - monthExpected);
    }
    else if ((month == monthExpected) && (day > dayExpected)) {
      fine = 15 * (day - dayExpected);
    }
    else if ((month == monthExpected) && (day == dayExpected)) {
      fine = 0;
    }
  }

  printf("%d\n", fine);

  return 0;
}
