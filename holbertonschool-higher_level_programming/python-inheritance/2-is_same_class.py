#!/usr/bin/python3

"""
Module Name: 2-is_same_class
Description: function that returns True
if the object is exactly an instance of
the specified class; otherwise False.
Authors: Lusanco
"""


def is_same_class(obj, a_class):
    """Verify instance"""
    return type(obj) is a_class
