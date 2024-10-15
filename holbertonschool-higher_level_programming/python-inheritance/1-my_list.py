#!/usr/bin/python3

"""
Module Name: 1-my_list
Description: class MyList that
inherits from list
Authors: Lusanco
"""


class MyList(list):
    """prints list in ascending sort"""

    def print_sorted(self):
        print(sorted(self))
