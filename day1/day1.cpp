#include <iomanip>
#include <iostream>
#include <string>

int main()
{
  int i = 4;
  double d = 4.0;
  std::string s = "HackerRank ";

  int intVar;
  double doubleVar;
  std::string stringVar;

  // Read and save an integer, double, and String to new variables.
  std::cin >> intVar >> doubleVar;
  std::cin.ignore();
  getline(std::cin, stringVar);

  // Print the sum of both integer variables on a new line.
  std::cout << intVar + i << std::endl;

  // Print the sum of the double variables on a new line.
  std::cout << std::fixed << std::setprecision(1) << doubleVar + d << std::endl;

  // Concatenate and print the String variables on a new line
  // The 's' variable above should be printed first.
  std::cout << s + stringVar << std::endl;

  return 0;
}
