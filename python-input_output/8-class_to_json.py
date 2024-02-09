#!/usr/bin/python3
"""
Module: 8-class_to_json
Descrip: returns the dictionary description
with simple data structure (list, dictionary,
string, integer and boolean) for JSON
serialization of an object
Authors: Lusanco
"""


def class_to_json(obj):
    return obj.__dict__
