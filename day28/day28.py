#!/bin/python3

import re

if __name__ == '__main__':
    N = int(input())

    names = []

    for N_itr in range(N):
        firstNameEmailID = input().split()

        firstName = firstNameEmailID[0]

        emailID = firstNameEmailID[1]

        match = re.search(r'[\w\.-]+@gmail.com', emailID)
        if match:
            names.append(firstName)
    names.sort()
    for name in names:
        print(name)
