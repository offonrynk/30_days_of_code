#!/bin/python3

if __name__ == '__main__':
    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    max = 0
    for i in range(0, 4):
        for j in range(0, 4):
            sum = 0
            sum = (arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                   arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] +
                   arr[i + 2][j + 2])
            if (i == 0 and j == 0):
                max = sum

            if (sum > max):
                max = sum

    print(max)