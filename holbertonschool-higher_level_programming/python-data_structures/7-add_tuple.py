#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    list_a = tuple_a + (0, 0)
    list_b = tuple_b + (0, 0)
    added = (list_a[0] + list_b[0], list_a[1] + list_b[1])
    return added
