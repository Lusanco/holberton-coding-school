#!/usr/bin/env python3
"""
Measures the average execution time
of concurrently calling wait_n.
"""

import time
import asyncio
from typing import List

wait_n = __import__("1-concurrent_coroutines").wait_n


def measure_time(n: int, max_delay: int) -> float:
    """
    This function asynchronously executes the `wait_n`
    function with the provided `n` and `max_delay`
    arguments. It measures the total wall-clock time
    taken using `time.perf_counter` and then calculates
    the average execution time per call to `wait_n`.

    Args:
        n (int): The number of times to call `wait_random`
        asynchronously.
        max_delay (int): The maximum delay (inclusive) to
        be used in each `wait_random` call.

    Returns:
        float: The average execution time in seconds for
        a single asynchronous call to `wait_n(n, max_delay)`.
    """

    start_time = time.perf_counter()
    asyncio.run(wait_n(n, max_delay))
    end_time = time.perf_counter()
    total_time = end_time - start_time
    return total_time / n
