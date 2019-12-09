#!/bin/python
import sys

def printEvenIndexChar(s):
    output = ""
    for i in range(0, len(s), 2):
        output += s[i]
    return output

def printOddIndexChar(s):
    output = ""
    for i in range(1, len(s), 2):
        output += s[i]
    return output

if __name__ == '__main__':
    n = int(input())
    for i in range(0, n):
        s = input()
        print(printEvenIndexChar(s) + " " + printOddIndexChar(s))
