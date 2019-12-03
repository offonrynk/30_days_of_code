
#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int n;
  std::string name;
  long phoneNum;

  cin >> n;
  std::map<std::string, long> phoneBook;

  for (int i = 0; i < n; ++i) {
    cin >> name >> phoneNum;
    phoneBook[name] = phoneNum;
  }

  while (cin >> name) {
    if (phoneBook.find(name) == phoneBook.end()) {
      cout << "Not found" << endl;
    }
    else {
      cout << name << "=" << phoneBook.at(name) << endl;
    }
  }

  return 0;
}
