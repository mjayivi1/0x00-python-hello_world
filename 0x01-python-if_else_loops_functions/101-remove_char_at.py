#!/usr/bin/python3
def remove_char_at(str, n):
    if n > 0 or n == 0:
        str1 = str[0:n] + str[n+1:]
    elif n < 0:
        str1 = str[0:n] + str[n:]
    return str1
