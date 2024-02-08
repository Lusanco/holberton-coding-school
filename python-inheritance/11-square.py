#!/usr/bin/python3
"""
Module Name: 11-square
Description: class Square that inherits
Rectangle (9-rectangle.py).
(task based on 10-square.py)
Authors: Lusanco
"""


Rectangle = __import__("9-rectangle").Rectangle


class Square(Rectangle):
    """Class inherits Rectangle"""

    def __init__(self, size):
        self.integer_validator("size", size)
        super().__init__(size, size)
        self.__Square__size = size

    def __str__(self):
        return f"[Square] {self.__Square__size}/{self.__Square__size}"
