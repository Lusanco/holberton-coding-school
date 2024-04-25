#!/usr/bin/env python3

"""Calculates the length of each element
in a list and returns a list of tuples.

Args:
    lst (Iterable[Sequence]): The list
    containing elements whose lengths to find.

Returns:
    List[Tuple[Sequence, int]]: A list
    of tuples where each tuple contains
    an element from lst and its length.
"""

from typing import Iterable, Sequence, Tuple, List


def element_length(lst: Iterable[Sequence]) -> List[Tuple[Sequence, int]]:
    """Returns a list of tuples containing elements and their lengths."""
    return [(item, len(item)) for item in lst]
