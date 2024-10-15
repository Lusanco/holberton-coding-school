#!/usr/bin/python3

"""
Module Name: 3-json_string.py
Description: returns the JSON
representation of an object (string)
Authors: Lusanco
"""


import json


def to_json_string(my_obj):
    """returns the JSON representation
    of an object (string)"""

    return json.dumps(my_obj)
