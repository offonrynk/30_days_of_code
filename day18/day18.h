#include <queue>
#include <stack>

class Solution {
public:
  Solution() {}
  ~Solution() {}

  void pushCharacter(const char &ch)
  {
    myStackInstance.push(ch);
  }

  void enqueueCharacter(const char &ch)
  {
    myQueueInstance.push(ch);
  }

  char popCharacter()
  {
    char retChar;
    while (!myStackInstance.empty()) {
      retChar = myStackInstance.top();
      myStackInstance.pop();
    }
    return retChar;
  }

  char dequeueCharacter()
  {
    char retChar;
    while (!myQueueInstance.empty()) {
      retChar = myQueueInstance.front();
      myQueueInstance.pop();
    }
    return retChar;
  }

private:
  std::stack<char> myStackInstance;
  std::queue<char> myQueueInstance;
};
