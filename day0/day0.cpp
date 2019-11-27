#include <iostream>

int main()
{
  std::string inputString; // declare a variable to hold desired input
  getline(std::cin,
          inputString); // get a line of input from cin & save it to variable

  std::cout << "Hello, World." << '\n' << inputString << std::endl;

  return 0;
}
