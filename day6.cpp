#include <iostream>
#include <string>

int main()
{
  int num;
  std::cin >> num;
  for (int i = 0; i <= num; ++i) {
    std::string s;
    std::cin >> s;

    for (int j = 0; j < s.size(); j += 2) {
      std::cout << s[j];
    }
    std::cout << " ";
    for (int k = 1; k < s.size(); k += 2) {
      std::cout << s[k];
    }
    std::cout << std::endl;
  }

  return 0;
}
