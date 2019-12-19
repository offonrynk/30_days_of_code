#include <iostream>

int main()
{
  int day, month, year;
  std::cin >> day >> month >> year;

  int dayExpected, monthExpected, yearExpected;
  std::cin >> dayExpected >> monthExpected >> yearExpected;

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

  std::cout << fine << std::endl;

  return 0;
}
