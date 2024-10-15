#!/usr/bin/python3
"""
Module Name: 6-load_from_json_file.py
Description: creates an Object from a “JSON file”
Authors: Lusanco
"""


import json


def load_from_json_file(filename):
    """creates an Object from a “JSON file”"""
    with open(filename, "r") as file:
        return json.load(file)
