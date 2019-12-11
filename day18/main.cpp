#include "day18.h"
#include <iostream>
#include <string>

int main()
{
  std::string s;
  std::getline(std::cin, s);

  Solution obj;

  // push/enqueue all the characters of string s to stack.
  for (int i = 0; i < s.length(); i++) {
    obj.pushCharacter(s[i]);
    obj.enqueueCharacter(s[i]);
  }

  bool isPalindrome = true;

  // pop the top character from stack.
  // dequeue the first character from queue.
  // compare both the characters.
  for (int i = 0; i < s.length() / 2; i++) {
    if (obj.popCharacter() != obj.dequeueCharacter()) {
      isPalindrome = false;

      break;
    }
  }

  // finally print whether string s is palindrome or not.
  if (isPalindrome) {
    std::cout << "The word, " << s << ", is a palindrome." << std::endl;
  }
  else {
    std::cout << "The word, " << s << ", is not a palindrome." << std::endl;
  }

  return 0;
}
