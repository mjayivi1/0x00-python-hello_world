#!/usr/bin/python3
def no_c(my_string):
    my_list = []
    new_str = ""
    for i in my_string:
        if i == "c" or i == "C":
            continue
        else:
            my_list.append(i)
    return new_str.join(my_list)
