#!/usr/bin/python3

"""
Module Name: 2-append_write.py
Description: appends a string at the
end of a text file (UTF8) and returns
the number of characters added
Authors: Lusanco
"""


def append_write(filename="", text=""):
    """appends a string at the
    end of a text file (UTF8) and returns
    the number of characters added"""

    with open(filename, "a", encoding="utf-8") as file:
        return file.write(text)
