#!/usr/bin/python3
def uppercase(str):
    for letter in str:
        if ord('a') <= ord(letter) <= ord('A'):
            upper = chr(ord(letter) - (ord('a') - ord('A')))
        else:
            upper = letter
        print("{}".format(upper))
    print("{}".format("\n"))
