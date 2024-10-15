#!/usr/bin/env python3

"""Calculates the sum of all elements in a list of floats.

Args:
    input_list (List[float]): The list of floats to sum.

Returns:
    float: The sum of all elements in input_list.
"""

from typing import List


def sum_list(input_list: List[float]) -> float:
    """Sums all floats in a list."""
    return sum(input_list)
