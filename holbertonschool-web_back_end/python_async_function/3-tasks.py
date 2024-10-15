#!/usr/bin/env python3
"""
    Schedules an asynchronous task that waits for a random delay.
"""

import asyncio


wait_random = __import__("0-basic_async_syntax").wait_random


def task_wait_random(max_delay: int) -> asyncio.Task:
    """This function creates and returns an `asyncio.Task`
    object. The task will asynchronously call the
    `wait_random` function with the provided `max_delay`
    argument. The `wait_random` function introduces a
    random delay between 0 and `max_delay` seconds.

    Args:
        max_delay (int): The maximum delay in seconds
        for the wait within the task.

    Returns:
        asyncio.Task: An asyncio task object representing
        the scheduled coroutine that will wait for the
        random delay. You can use `await` on this task
        object to get the actual delay experienced.
    """
    task = asyncio.create_task(wait_random(max_delay))
    return task
