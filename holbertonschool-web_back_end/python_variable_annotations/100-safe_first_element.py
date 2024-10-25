# !/usr/bin/env python3

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

# The types of the elements of the input are not known
def safe_first_element(lst: Sequence[Any]) -> Optional[Any]:
    """
    Safely returns the first element
    of a sequence if it exists.

    Args:
        lst (Sequence[Any]): A sequence
        (list, tuple, etc.) containing
        elements of any type.

    Returns:
        Optional[Any]: The first element
        of the sequence if it exists,
        otherwise None.
    """
    
    if lst:
        return lst[0]
    else:
        return None
