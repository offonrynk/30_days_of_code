#!/bin/python3

if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        nk = input().split()

        n = int(nk[0])

        k = int(nk[1])

        maxVal = 0
        if((k-1 | k) <= n):
            maxVal = k-1
        else:
            maxVal = k-2
        print(maxVal)
