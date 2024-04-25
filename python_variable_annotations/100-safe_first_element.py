#!/usr/bin/env python3

"""
Returns the first element of a sequence
if it exists, otherwise returns None.

Args:
    lst (Sequence[Any]): The sequence
    to get the first element from.

Returns:
    Optional[Any]: The first element
    of the sequence or None if empty.
"""

from typing import Sequence, Any, Optional


def safe_first_element(lst: Sequence[Any]) -> Optional[Any]:
    """Returns the first element of a sequence or None."""
    # return lst[0] if lst else None
    if lst:
        return lst[0]
    else:
        return None
