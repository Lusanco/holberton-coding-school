#!/usr/bin/env python3

"""Calculates the sum of all elements
in a list of integers and floats.

Args:
    mxd_lst (List[Union[int, float]]):
    The list of integers and floats to sum.

Returns:
    float: The sum of all elements in mxd_lst.
"""

from typing import List, Union


def sum_mixed_list(mxd_lst: List[Union[int, float]]) -> float:
    """Sums all integers and floats in a list."""
    return sum(mxd_lst)
