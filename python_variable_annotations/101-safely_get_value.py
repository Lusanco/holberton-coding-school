#!/usr/bin/env python3

"""Safely retrieves a value from a dictionary given a key.

Args:
    dct (Mapping[Any, Any]): The dictionary to search.
    key (Any): The key to look up.
    default (Union[T, None], optional): The default
    value to return if the key is not found. Defaults to None.

Returns:
    Union[Any, T]: The value associated with
    the key or the default value if not found.
"""

from typing import TypeVar, Mapping, Any, Union

T = TypeVar('T')


def safely_get_value(
    dct: Mapping[Any, Any], key: Any, default: Union[T, None] = None
) -> Union[Any, T]:
    """Returns the value for a key in a
    dictionary, or a default if not found."""
    return dct.get(key, default)
