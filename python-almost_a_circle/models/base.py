#!/usr/bin/python3
"""Comment Module"""


import json


class Base:
    """This class will be the “base” of all other
    classes in this project. The goal of it is
    to manage id attribute in all your
    future classes and to avoid duplicating
    the same code"""
    __nb_objects = 0

    def __init__(self, id=None):
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

    @staticmethod
    def to_json_string(list_dictionaries):
        """Return the JSON string representation of list_dictionaries."""
        if list_dictionaries is None:
            return "[]"
        else:
            return json.dumps(list_dictionaries)

    @classmethod
    def save_to_file(cls, list_objs):
        if list_objs is None:
            list_objs = []

        filename = cls.__name__ + ".json"
        with open(filename, "w") as f:
            dict_list = [obj.to_dictionary() for obj in list_objs]
            json_str = cls.to_json_string(dict_list)
            f.write(json_str)

    @staticmethod
    def from_json_string(json_string):
        """Return list represented by json_string"""
        if json_string is None:
            return []
        return json.loads(json_string)

    @classmethod
    def create(cls, **dictionary):
        """This method first checks whether
        the class is Rectangle or Square"""
        if cls.__name__ == 'Rectangle':
            base_instance = cls(1, 1)
        elif cls.__name__ == 'Square':
            base_instance = cls(1)
        else:
            return None

        base_instance.update(**dictionary)
        return base_instance

    @classmethod
    def load_from_file(cls):
        """return a list of instances"""
        filename = cls.__name__ + ".json"
        try:
            with open(filename, 'r') as f:
                data = f.read()
                dicts = cls.from_json_string(data)
                instances = []
                for d in dicts:
                    instance = cls.create(**d)
                    instances.append(instance)
                return instances
        except:
            return []