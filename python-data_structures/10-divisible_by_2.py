#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    result = []
    for _ in my_list:
        result.append(_ % 2 == 0)
    return result
