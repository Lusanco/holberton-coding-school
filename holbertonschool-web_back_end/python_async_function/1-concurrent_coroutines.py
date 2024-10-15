#!/usr/bin/env python3
"""
    Executes the wait_random function asynchronously
    n times with a specified maximum delay.
"""
import asyncio
from typing import List


wait_random = __import__('0-basic_async_syntax').wait_random


async def wait_n(n: int, max_delay: int) -> List[float]:
    """
    This function spawns `n` asynchronous tasks, each calling
    the `wait_random` function with the provided `max_delay`.
    It then waits for all tasks to finish and returns a list
    of the delays experienced by each `wait_random` call,
    sorted in ascending order.

    Args:
        n (int): The number of times to call `wait_random`
        asynchronously. max_delay (int): The maximum delay
        (inclusive) to be used in each `wait_random` call.

    Returns:
        List[float]: A list containing the actual delays
        experienced by each asynchronous `wait_random`
        call, sorted in ascending order.
    """

    delays = []
    tasks = [asyncio.create_task(wait_random(max_delay)) for _ in range(n)]

    for task in tasks:
        delays.append(await task)

    return sorted(delays)
