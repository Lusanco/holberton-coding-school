#!/usr/bin/python3
"""
Module Name: 0-add_integer
Description: Adds two integers
Author: Lusanco, Date: Feb 01 2024
"""


def add_integer(a, b=98):
    """Description: Adds two integers
    - a (int or float): The first integer.
    - b (int or float): The second integer. Default is 98."""

    # if not a:
    #     raise TypeError("a must be an integer")
    if type(a) is not int and type(a) is not float:
        raise TypeError("a must be an integer")
    if type(b) is not int and type(b) is not float:
        raise TypeError("b must be an integer")
    return int(a + b)
