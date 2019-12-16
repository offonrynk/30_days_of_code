#include <bits/stdc++.h>
#include <iostream>
#include <vector>

int main()
{
  std::vector<std::vector<int>> arr(6);
  for (int x = 0; x < 6; x++) {
    arr[x].resize(6);

    for (int y = 0; y < 6; y++) {
      std::cin >> arr[x][y];
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }

  int max = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int sum = 0;
      sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] +
            arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
      if (i == 0 && j == 0) {
        max = sum;
      }

      if (sum > max) {
        max = sum;
      }
    }
  }

  std::cout << max << std::endl;

  return 0;
}
