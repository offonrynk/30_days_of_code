#!/bin/python3
import sys

n = int(input().strip())

if ((n % 2 != 0) or ((n % 2 == 0) and (n >= 6 and n <= 20))):
    print("Weird")

if (n % 2 == 0):
    if ((n >= 2 and n <= 6) or (n > 20)):
        print("Not Weird")
