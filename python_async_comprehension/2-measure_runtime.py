#!/usr/bin/env python3
"""
Asynchronously generates and collects a list of random integers.
Measures the total execution time of running async_comprehension
four times concurrently.
"""
import asyncio
from typing import List

async_generator = __import__("0-async_generator").async_generator


async def async_comprehension() -> List[int]:
    """
    This function uses an asynchronous comprehension to efficiently
    capture the yielded values from the `async_generator` function.
    The comprehension iterates asynchronously over the generator,
    collecting each yielded random integer. Finally, the function
    returns a list containing all the collected values.

    Args:
        None (implicit): This function doesn't accept any arguments.

    Returns:
        List[int]: A list containing the asynchronously collected
        random integers.
    """
    return [i async for i in async_generator()]


async def measure_runtime() -> float:
    """
    This function calculates the total wall-clock time taken to
    execute the `async_comprehension` function four times in
    parallel. It uses `asyncio.get_event_loop().time()` to get
    timestamps before and after the concurrent execution using
    `asyncio.gather`. The function then returns the difference
    between these timestamps, representing the total runtime.

    Returns:
        float: The total execution time in seconds for running
        `async_comprehension` four times concurrently.
    """
    start_time = asyncio.get_event_loop().time()

    # Execute async_comprehension four times in parallel using asyncio.gather
    results: List[List[int]] = await asyncio.gather(
        async_comprehension(),
        async_comprehension(),
        async_comprehension(),
        async_comprehension(),
    )

    # Calculate the total runtime
    end_time = asyncio.get_event_loop().time()
    total_runtime = end_time - start_time

    return total_runtime


async def main():
    """
    Runs the measure_runtime function and returns its result.

    This function calls the `measure_runtime` coroutine and
    awaits its result. The result, which is the total runtime
    of four concurrent `async_comprehension` executions, is
    then returned.
    """
    return await measure_runtime()


if __name__ == "__main__":
    print(asyncio.run(main()))
