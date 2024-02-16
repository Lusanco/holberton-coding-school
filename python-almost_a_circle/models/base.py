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
        if id is None:
            Base.__nb_objects += 1
            id = Base.__nb_objects
        self.id = id

    @classmethod
    def create(cls, **dictionary):
        """returns an instance with all attributes already set"""
        if cls.__name__ == "Rectangle":
            dummy = cls(1, 1)
        if cls.__name__ == "Square":
            dummy = cls(1)
        dummy.update(**dictionary)
        return dummy

    @staticmethod
    def from_json_string(json_string):
        """returns the list of the JSON string representation json_string"""
        if json_string is None or not json_string:
            return []
        return json.loads(json_string)

    @classmethod
    def load_from_file(cls):
        """returns a list of instances"""
        filename = cls.__name__ + ".json"
        try:
            with open(filename, "r") as file:
                data = cls.from_json_string(file.read())
        except FileNotFoundError:
            return []
        obj_list = []
        for dictionary in data:
            instance = cls.create(**dictionary)
            obj_list.append(instance)
        return obj_list

    @classmethod
    def save_to_file(cls, list_objs):
        """writes the JSON string representation of list_objs to a file"""
        if list_objs is None:
            list_objs = []
        file_name = cls.__name__ + ".json"
        list_of_dict = []
        for obj in list_objs:
            list_of_dict.append(obj.to_dictionary())

        with open(file_name, "w") as file:
            json_string = cls.to_json_string(list_of_dict)
            file.write(json_string)

    @staticmethod
    def to_json_string(list_dictionaries):
        """returns JSON string representation of list_dictionaries"""
        if list_dictionaries is None or not list_dictionaries:
            return "[]"
        else:
            return json.dumps(list_dictionaries)
