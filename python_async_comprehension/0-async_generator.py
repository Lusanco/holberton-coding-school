#!/usr/bin/env python3
"""
Asynchronously yields random floating-point
numbers between 0 and 10 (inclusive).
"""

import asyncio
import random


async def async_generator():
    """
    This function defines an asynchronous generator that
    yields random floating-point numbers between 0 and 10
    (inclusive) with a one-second interval between each yield.
    It uses `asyncio.sleep` to introduce the delay between yields.

    Yielding from an asynchronous generator allows for
    iterating over the values asynchronously,
    receiving them one by one as they become available.

    Yields:
        float: A random floating-point number between 0.0 and 10.0 (inclusive).
    """
    for _ in range(10):
        await asyncio.sleep(1)
        yield random.uniform(0, 10)
