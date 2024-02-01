#!/usr/bin/python3

"""
Module Name: 0-add_integer
Description: Adds two integers

Author: Lusanco
Date: Feb 01 2024
"""


def add_integer(a, b=98):
    if not isinstance(a, (int, float)):
        raise TypeError("a must be an integer")

    if not isinstance(b, (int, float)):
        raise TypeError("b must be an integer")

    return int(a) + int(b)
