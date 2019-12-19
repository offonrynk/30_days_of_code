#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

int minimum_index(vector<int> seq)
{
  if (seq.empty()) {
    throw invalid_argument(
        "Cannot get the minimum value index from an empty sequence");
  }
  int min_idx = 0;
  for (int i = 1; i < seq.size(); ++i) {
    if (seq[i] < seq[min_idx]) {
      min_idx = i;
    }
  }
  return min_idx;
}

//---------------------------------------------------------------
class TestDataEmptyArray {
public:
  static std::vector<int> get_array()
  {
    return {};
  }
};

class TestDataUniqueValues {
public:
  static std::vector<int> get_array()
  {
    std::vector<int> uniqueArray{7, 11, 13, 4, 12, 5, 85, 2};
    return uniqueArray;
  }

  static int get_expected_result()
  {
    std::vector<int> a = get_array();
    int minIdx = 0;
    for (int i = 0; i < a.size(); ++i) {
      if (a[i] < a[minIdx])
        minIdx = i;
    }
    return minIdx;
  }
};

class TestDataExactlyTwoDifferentMinimums {
public:
  static std::vector<int> get_array()
  {
    std::vector<int> vect{1, 45, 6, 7828, 7, 2, 1, 4};
    return vect;
  }

  static int get_expected_result()
  {
    std::vector<int> a = get_array();
    int minIdx = 0;
    for (int i = 0; i < a.size(); ++i) {
      if (a[i] < a[minIdx])
        minIdx = i;
    }
    return minIdx;
  }
};
//---------------------------------------------------------------

void TestWithEmptyArray()
{
  try {
    auto seq = TestDataEmptyArray::get_array();
    auto result = minimum_index(seq);
  }
  catch (invalid_argument &e) {
    return;
  }
  assert(false);
}

void TestWithUniqueValues()
{
  auto seq = TestDataUniqueValues::get_array();
  assert(seq.size() >= 2);

  assert(set<int>(seq.begin(), seq.end()).size() == seq.size());

  auto expected_result = TestDataUniqueValues::get_expected_result();
  auto result = minimum_index(seq);
  assert(result == expected_result);
}

void TestWithExactlyTwoDifferentMinimums()
{
  auto seq = TestDataExactlyTwoDifferentMinimums::get_array();
  assert(seq.size() >= 2);

  auto tmp = seq;
  sort(tmp.begin(), tmp.end());
  assert(tmp[0] == tmp[1] and (tmp.size() == 2 or tmp[1] < tmp[2]));

  auto expected_result =
      TestDataExactlyTwoDifferentMinimums::get_expected_result();
  auto result = minimum_index(seq);
  assert(result == expected_result);
}

int main()
{
  TestWithEmptyArray();
  TestWithUniqueValues();
  TestWithExactlyTwoDifferentMinimums();
  cout << "OK" << endl;
  return 0;
}
