#!/usr/bin/env python3

"""Creates a closure that returns a function
that multiplies a float by a given value.

This function creates a closure by capturing
the `multiplier` value. The returned function
takes a single float argument and returns its
product with the captured multiplier.

Args:
    multiplier (float): The value to use for multiplication.

Returns:
    Callable[[float], float]: A function that takes a float
    and returns its product with the multiplier.
"""

from typing import Callable


def make_multiplier(multiplier: float) -> Callable[[float], float]:
    """Function that returns a function that multiplies by a fixed value."""

    def multiply(n: float) -> float:
        """Function that multiplies a number by the multiplier."""
        return n * multiplier

    return multiply
