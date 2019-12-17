#!/bin/python3


def bubbleSort(arr, n):
    numberOfSwaps = 0
    swapped = False
    for i in range(0, n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
                numberOfSwaps += 1

        if swapped == False:
            break

    return numberOfSwaps


n = int(input().strip())
a = list(map(int, input().strip().split(' ')))

numberOfSwaps = bubbleSort(a, n)
print("Array is sorted in " + str(numberOfSwaps) + " swaps.")
print("First Element: " + str(a[0]))
print("Last Element: " + str(a[n-1]))
