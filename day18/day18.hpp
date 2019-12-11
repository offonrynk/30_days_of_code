#include <deque>
#include <vector>

class Solution {
  //!< using std container library data structures vector and deque
public:
  Solution() {}
  ~Solution() {}

  void pushCharacter(const char &ch)
  {
    myStackInstance.push_back(ch);
  }

  void enqueueCharacter(const char &ch)
  {
    myQueueInstance.push_front(ch);
  }

  char popCharacter() const
  {
    char retChar;
    for (const auto &c : myStackInstance)
      retChar = c;

    return retChar;
  }

  char dequeueCharacter() const
  {
    char retChar;
    for (const auto &c : myQueueInstance)
      retChar = c;

    return retChar;
  }

private:
  std::vector<char> myStackInstance;
  std::deque<char> myQueueInstance;
};
