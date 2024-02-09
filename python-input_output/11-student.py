#!/usr/bin/python3
"""
Module: 11-student
Descrip: class Student that defines a student
by the Public instance attributes:
first_name, last_name, age
Authors: Lusanco
"""


class Student:
    """class Student that defines a student"""

    def __init__(self, first_name, last_name, age):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        if attrs is None:
            return self.__dict__
        else:
            attrs_ = {}
            for attribute in attrs:
                if hasattr(self, attribute):
                    attrs_[attribute] = getattr(self, attribute)
        return attrs_

    def reload_from_json(self, json):
        for key, value in json.items():
            setattr(self, key, value)
