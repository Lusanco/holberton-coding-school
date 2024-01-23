#!/usr/bin/python3


def print_list_integer(my_list=[]):
    for _ in range(0, len(my_list)):
        print("{}".format(int(my_list[_])))
