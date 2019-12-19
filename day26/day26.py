#!/bin/python3

[day, month, year] = map(int, input().split(' '))
[dayExpected, monthExpected, yearExpected] = map(int, input().split(' '))

fine = 0
if(year > yearExpected):
    fine = 10000

elif(year == yearExpected):
    if(month > monthExpected):
        fine = 500 * (month - monthExpected)

    elif((month == monthExpected) and (day > dayExpected)):
        fine = 15 * (day - dayExpected)

    elif((month == monthExpected) and (day == dayExpected)):
        fine = 0

print(fine)
