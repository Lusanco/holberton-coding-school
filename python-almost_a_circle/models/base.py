#!/usr/bin/python3

"""
Module: base
Descrip: Base class
Authors: Lusanco
"""


import json


class Base:
    """
    Base class for all other classes that manage id attribute in all your future classes, avoiding duplicating the same code
    """

    __nb_objects = 0

    def __init__(self, id=None):
        """Initialize Base instance with id"""
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

    @staticmethod
    def to_json_string(list_dictionaries):
        """returns JSON string representation of list_dictionaries"""
        if list_dictionaries is None or len(list_dictionaries) == 0:
            return "[]"
        else:
            return json.dumps(list_dictionaries)

    @classmethod
    def save_to_file(cls, list_objs):
        """writes the JSON string representation of list_objs to a file"""
        if list_objs is None:
            list_objs = []
        file_name = cls.__name__ + ".json"
        with open(file_name, "w") as file:
            json_list = [obj.to_dictionary() for obj in list_objs]
            json_string = cls.to_json_string(json_list)
            file.write(json_string)

    @staticmethod
    def from_json_string(json_string):
        """returns the list of the JSON string representation json_string"""
        if json_string is None or len(json_string) == 0:
            return []
        return json.loads(json_string)

    @classmethod
    def create(cls, **dictionary):
        """returns an instance with all attributes already set"""
        if cls.__name__ == "Rectangle":
            dummy = cls(1, 1)
        elif cls.__name__ == "Square":
            dummy = cls(1)

        dummy.update(**dictionary)
        return dummy

    @classmethod
    def load_from_file(cls):
        """returns a list of instances"""
        filename = cls.__name__ + ".json"
        try:
            with open(filename, "r") as file:
                data = cls.from_json_string(file.read())
                instances = [cls.create(**item) for item in data]
                return instances
        except FileNotFoundError:
            return []
