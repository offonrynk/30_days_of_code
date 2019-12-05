#include <bits/stdc++.h>
#include <iostream>

bool isEven(int &n)
{
  bool status = false;
  if (n % 2 == 0)
    status = true;

  return status;
}

bool isOdd(int &n)
{
  bool status = false;
  if (n % 2 != 0)
    status = true;

  return status;
}

int main()
{
  int N;
  std::cin >> N;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  if (isOdd(N) || (isEven(N) && (N >= 6 && N <= 20))) {
    std::cout << "Weird" << std::endl;
  }

  if (isEven(N)) {
    if ((N >= 2 && N <= 6) || (N > 20)) {
      std::cout << "Not Weird" << std::endl;
    }
  }

  return 0;
}
