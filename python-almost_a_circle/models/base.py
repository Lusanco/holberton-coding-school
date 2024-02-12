#!/usr/bin/python3

"""
Module: base
Descrip: This module contains
the Base class, which serves
as the foundation for other
classes in the project.
Authors: Lusanco
"""


class Base:
    """
    Constructor for the Base class.

    Parameters:
    - id (int): An optional parameter representing the object's
    identifier. If not provided, a unique id is assigned.
    """

    __nb_objects = 0

    def __init__(self, id=None):
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects
