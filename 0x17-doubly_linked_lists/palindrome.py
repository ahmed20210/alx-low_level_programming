#!/usr/bin/python3
def ispalindrome(n):
    string = str(n)
    return string == string[::-1]

array = []
i = 999
while i > 99:
    j = i
    while j > 99:
        if ispalindrome(i * j):
            array.append(i * j)
        j -= 1
    i -= 1
print(max(array))
