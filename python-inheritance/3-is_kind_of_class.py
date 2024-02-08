#!/usr/bin/python3

"""
Module Name: 3-is_kind_of_class
Description: function that returns True if
the object is an instance of, or if the
object is an instance of a class that
inherited from, the specified class; otherwise False.
Authors: Lusanco
"""


def is_kind_of_class(obj, a_class):
    """Check if obj is exactly an instance of the specified class."""
    if isinstance(obj, a_class):
        return True
    else:
        return False
