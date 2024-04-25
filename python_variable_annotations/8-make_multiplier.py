#!/usr/env/bin python3

"""Creates a function that multiplies a float by a given value.

Args:
    multiplier (float): The value to use for multiplication.

Returns:
    Callable[[float], float]: A function that takes a float
    and returns its product with the multiplier.
"""

from typing import Callable


def make_multiplier(multiplier: float) -> Callable[[float], float]:
    """Returns a function that multiplies by a fixed value."""
    def multiply(n: float) -> float:
        """Multiplies a number by the multiplier."""
        return n * multiplier
    return multiply
