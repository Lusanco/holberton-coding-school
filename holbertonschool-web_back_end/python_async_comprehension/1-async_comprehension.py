#!/usr/bin/env python3
"""
Asynchronously collects random floating-point
numbers using an asynchronous comprehension.
"""

from typing import List

async_generator = __import__("0-async_generator").async_generator


async def async_comprehension() -> List[float]:
    """
    This function employs an asynchronous comprehension to
    efficiently iterate over the `async_generator` function
    and collect the yielded random floating-point numbers.
    The comprehension iterates asynchronously over the generator,
    capturing each yielded value between 0 and 10 (inclusive)
    with a one-second interval. Finally, the function returns
    a list containing all the collected random numbers.

    Args:
        None (implicit): This function doesn't accept any arguments.

    Returns:
        List[float]: A list containing the asynchronously collected
        random floating-point numbers between 0.0 and 10.0 (inclusive).
    """

    return [num async for num in async_generator()]
