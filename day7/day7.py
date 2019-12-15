#!/bin/python3

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().rstrip().split()))

    reverseArr = ""
    for i in range(len(arr)-1 , -1, -1):
        reverseArr += str(arr[i]) + " "

    print(reverseArr)