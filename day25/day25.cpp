#include <complex>
#include <iostream>

bool numIsPrime(const int n)
{
  if (n == 1)
    return false;

  bool isPrime = true;
  int num = std::sqrt(n);
  for (int i = 2; i <= num; ++i) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

int main()
{
  int numOfTestCases;
  std::cin >> numOfTestCases;

  for (int i = 0; i < numOfTestCases; ++i) {
    int n;
    std::cin >> n;

    if (numIsPrime(n))
      std::cout << "Prime" << std::endl;
    else
      std::cout << "Not prime" << std::endl;
  }
  return 0;
}
