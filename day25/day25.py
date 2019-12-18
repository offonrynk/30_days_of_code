#!/bin/python3

import math


def isNumPrime(n):
    if (n == 1):
        return 'Not prime'

    primeStatus = 'Prime'
    num = int(math.sqrt(n))
    for i in range(2, num+1):
        if n % i == 0:
            primeStatus = 'Not prime'
            break

    return primeStatus


t = int(input())
for i in range(t):
    number = int(input())
    print(isNumPrime(number))
