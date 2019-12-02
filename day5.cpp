#include <bits/stdc++.h>
#include <iostream>

int main()
{
  int n;
  std::cin >> n;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  if (n < 2 || n > 20)
    return -1;

  for (int i = 1; i <= 10; ++i)
    std::cout << n << " x " << i << " = " << n * i << std::endl;

  return 0;
}
