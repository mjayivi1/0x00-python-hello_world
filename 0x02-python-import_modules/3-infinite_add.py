#!/usr/bin/python3
from sys import argv
if __name__ == "__main__":
    c = len(argv)
    sum = 0
    if c == 1:
        print("{}".format(sum))
    else:
        for i in range(1, c):
            sum +=int(argv.__getitem__(i))
    print("{}".format(sum))
