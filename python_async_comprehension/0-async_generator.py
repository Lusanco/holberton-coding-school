#!/usr/bin/env python3
"""
Asynchronous generator that yields
random floating-point numbers.

This script defines an asynchronous generator function
named `async_generator`. An asynchronous generator is a
special type of coroutine that can be used to efficiently
iterate over a sequence of values that are produced asynchronously.

The `async_generator` function:

- Takes no arguments.
- Iterates 10 times using a `for` loop.
- Within each iteration:
    - Waits for 1 second using `asyncio.sleep(1)`.
    - Yields a random floating-point number between
    0 and 10 (inclusive) using `random.uniform(0, 10)`.

Yielding allows the function to produce values one at a time
without blocking the event loop. This enables asynchronous
iteration over the generated sequence.

Yields:
    float: A random floating-point number between 0.0 and
    10.0 (inclusive).
"""

import asyncio
import random
from typing import Generator


async def async_generator() -> Generator[float, None, None]:
    """
    Coroutine async_generator that takes no arguments.
    The coroutine will loop 10 times, each time
    asynchronously wait 1 second, then yield a random
    number between 0 and 10.
    """
    for _ in range(10):
        await asyncio.sleep(1)
        yield random.uniform(0, 10)
