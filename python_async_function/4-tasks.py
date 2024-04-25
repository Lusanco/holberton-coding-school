#!/usr/bin/env python3
"""
Schedules and awaits n asynchronous tasks that wait for random delays.
"""

import asyncio
from typing import List


task_wait_random = __import__("3-tasks").task_wait_random


async def task_wait_n(n: int, max_delay: int) -> List[float]:
    """
    This function creates and schedules `n` asynchronous
    tasks using `task_wait_random`. Each task is configured
    with the provided `max_delay`. The function then uses
    `asyncio.gather` to wait for all tasks to finish. Finally,
    it returns a list containing the actual delays experienced
    by each task, sorted in ascending order.

    Args:
        n (int): The number of asynchronous tasks to schedule.
        max_delay (int): The maximum delay (inclusive) used in
        each `task_wait_random` call within the tasks.

    Returns:
        List[float]: A list containing the actual delays
        experienced by each task, sorted in ascending order.
    """
    tasks = []
    for _ in range(n):
        task = task_wait_random(max_delay)
        tasks.append(task)

    delays = await asyncio.gather(*tasks)
    return sorted(delays)
