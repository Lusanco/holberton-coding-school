#!/usr/bin/env python3

"""Creates a tuple with a key (str)
and the square of a value (int or float).

Args:
    k (str): The key for the tuple.
    v (Union[int, float]): The value
    whose square will be stored in the tuple.

Returns:
    Tuple[str, float]: A tuple containing (k, v**2).
"""

from typing import Union, Tuple


def to_kv(k: str, v: Union[int, float]) -> Tuple[str, float]:
    """Returns a tuple with key and value squared."""
    return (k, v * v)
