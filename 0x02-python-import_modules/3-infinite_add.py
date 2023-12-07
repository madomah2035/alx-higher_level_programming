#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv

    # Skip the first argument, which is the script name
    args = argv[1:]

    # Convert arguments to integers and calculate the sum
    result = sum(int(arg) for arg in args)

    print(result)
