#include <bits/stdc++.h>
#include <iostream>

int maxConsecutiveOnes(int n)
{
  int count = 0;
  while (n != 0) {
    // use bit shifting to remove trailing 1's
    // increment count
    n = (n & (n << 1));
    ++count;
  }

  return count;
}

int main()
{
  int n;
  std::cin >> n;

  int result = maxConsecutiveOnes(n);
  std::cout << result << std::endl;

  return 0;
}
