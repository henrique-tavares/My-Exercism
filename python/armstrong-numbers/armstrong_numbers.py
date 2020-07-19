from typing import List
import functools


def is_armstrong_number(number: int) -> bool:
    digits: List[int] = [int(n) for n in str(number)]

    return functools.reduce(lambda acc, n: acc + n ** len(digits), digits, 0) == number
