#include <algorithm>
#include <iostream>
#include <vector>

void bubbleSort(std::vector<int> &elements, int numOfElements, int *numOfSwaps)
{
  int numberOfSwaps = 0;
  bool swapped = false;
  for (int i = 0; i < numOfElements; i++) {
    for (int j = 0; j < numOfElements - 1; j++) {
      if (elements[j] > elements[j + 1]) {
        std::swap(elements[j], elements[j + 1]);
        swapped = true;
        numberOfSwaps++;
      }
    }
    if (swapped == 0) {
      break;
    }
  }

  *numOfSwaps = numberOfSwaps;
}

int main()
{
  int numOfElements;
  std::cin >> numOfElements;

  int inputElements;
  std::vector<int> elements;
  while (std::cin >> inputElements) {
    elements.push_back(inputElements);
  }

  int numberOfSwaps;
  bubbleSort(elements, numOfElements, &numberOfSwaps);

  std::cout << "Array is sorted in " << numberOfSwaps << " swaps." << std::endl;
  std::cout << "First Element: " << elements[0] << std::endl;
  std::cout << "Last Element: " << elements[numOfElements - 1] << std::endl;

  return 0;
}
