#!/usr/bin/env python3

"""Repeats elements in a list a specified number of times.

Creates a new list where each element from the original
list is repeated a given number of times (default is 2).

Args:
    lst (Tuple[Any]): The input list containing elements to repeat.
    factor (int, optional): The number of times to repeat each element.
    Defaults to 2.

Returns:
    List[Any]: A new list with elements
    repeated the specified number of times.
"""

from typing import Tuple, List, Any


def zoom_array(lst: Tuple[Any], factor: int = 2) -> List[Any]:
    """Repeats elements in a list."""
    return [item for item in lst for _ in range(factor)]


array = [12, 72, 91]

# Repeats elements twice
zoom_2x = zoom_array(array)

# Repeats elements three times
zoom_3x = zoom_array(array, 3)
