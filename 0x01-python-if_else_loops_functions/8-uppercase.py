#!/usr/bin/python3
def uppercase(str):
    for alpha in str:
        if ord('a') <= ord(alpha) <= ord('z'):
            upper = chr(ord(alpha) - (ord('a') - ord('A')))
            print("{}".format(upper), end="")
        else:
            upper = alpha
            print("{}".format(upper), end="")

    print()
