#!/usr/bin/env python3
"""
    Pytho script that updates a document in a collection based on name
"""


def update_topics(mongo_collection, name, topics):
    """
    Function that updates a document in a collection based on name
    """
    if mongo_collection is None:
        return None
    else:
        mongo_collection.update_many({"name": name}, {"$set": {"topics": topics}})
        return None
