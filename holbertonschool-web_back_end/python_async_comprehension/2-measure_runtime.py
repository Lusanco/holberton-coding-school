#!/usr/bin/env python3
"""
Measures the total wall-clock time to concurrently
execute async_comprehension four times.
"""

import asyncio
import time
from typing import List

async_comprehension = __import__("1-async_comprehension").async_comprehension


async def measure_runtime() -> float:
    """

    This function calculates the total execution time taken
    to run the `async_comprehension` function four times in
    parallel. It uses `time.time()` to get timestamps before
    and after the concurrent execution using `asyncio.gather`.
    The function then returns the difference between these
    timestamps, representing the total runtime for all four
    concurrent executions of `async_comprehension`.

    Returns:
        float: The total execution time in seconds for running
        `async_comprehension` four times concurrently.
    """

    start_time = time.time()
    await asyncio.gather(*(async_comprehension() for _ in range(4)))
    end_time = time.time()
    return end_time - start_time
