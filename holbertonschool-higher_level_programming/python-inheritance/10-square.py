#!/usr/bin/python3
"""
Module Name: 8-base_geometry
Description: class BaseGeometry
(based on 7-base_geometry.py)
Authors: Lusanco
"""


Rectangle = __import__("9-rectangle").Rectangle


class Square(Rectangle):
    """Class inherits from Rectangle"""

    def __init__(self, size):
        self.integer_validator("size", size)
        super().__init__(size, size)
