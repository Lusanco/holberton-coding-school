#!/usr/bin/python3
"""
Module Name: 8-base_geometry
Description: class BaseGeometry
(based on 7-base_geometry.py)
Authors: Lusanco
"""


BaseGeometry = __import__("7-base_geometry").BaseGeometry


class Rectangle(BaseGeometry):
    """Class inherits from BaseGeometry"""

    def __init__(self, width, heigth):
        self.integer_validator("width", width)
        self.integer_validator("height", heigth)
        self.__width = width
        self.__height = heigth
