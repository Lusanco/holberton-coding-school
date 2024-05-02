#!/usr/bin/env python3
"""
Python script that lists all documents in a collection
"""


def list_all(mongo_collection):
    """
    Function that lists all documents in the collection
    """
    if mongo_collection is None:
        return []
    else:
        return mongo_collection.find()
