#include <iostream>
#include <string>

int main()
{
  std::string S;
  std::cin >> S;

  try {
    int result = stoi(S);
    std::cout << result << std::endl;
  }
  catch (std::exception e) {
    std::cout << "Bad String" << std::endl;
  }
  return 0;
}
