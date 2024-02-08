#!/usr/bin/python3
"""
Module Name: 7-base_geometry
Description: class BaseGeometry
(based on 6-base_geometry.py)
Authors: Lusanco
"""


class BaseGeometry:
    """Public instance method that raises
    an Exception && Public instance method
    that validates value"""

    def area(self):
        raise Exception("area() is not implemented")

    def integer_validator(self, name, value):
        if type(value) is not int:
            raise TypeError(f"{name} must be an integer")
        if value <= 0:
            raise ValueError(f"{name} must be greater than 0")
