#!/usr/bin/env python3
"""
Introduces a random asynchronous delay between
0 and the specified maximum delay (inclusive).
"""

import asyncio
import random


async def wait_random(max_delay: int = 10) -> float:
    """
    This function uses asyncio.sleep to introduce an
    asynchronous pause with a random duration between
    0 and the provided maximum delay. The actual delay
    experienced might be slightly longer due to
    scheduling overhead.

    Args:
        max_delay (int, optional): The maximum delay
        in seconds. Defaults to 10.

    Returns:
        float: The actual delay that was waited for,
        in seconds.
    """

    delay = random.uniform(0, max_delay)
    await asyncio.sleep(delay)
    return delay
