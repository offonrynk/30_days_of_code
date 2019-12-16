#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Difference {
private:
  vector<int> elements;

public:
  int maximumDifference;

  Difference(vector<int> inputElements) : elements(inputElements) {}

  void computeDifference()
  {
    sort(elements.begin(), elements.end(), greater<int>());
    maximumDifference = elements.at(0) - elements.at(elements.size() - 1);
  }
};

int main()
{
  int N;
  cin >> N;

  vector<int> a;

  for (int i = 0; i < N; i++) {
    int e;
    cin >> e;

    a.push_back(e);
  }

  Difference d(a);

  d.computeDifference();

  cout << d.maximumDifference;

  return 0;
}
