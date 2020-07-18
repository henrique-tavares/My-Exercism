from typing import List
import random


class Robot:
    def __init__(self):
        self._name: str = self.__generate_name()

    @property
    def name(self) -> str:
        return self._name

    def reset(self) -> None:
        self._name = self.__generate_name()

    def __generate_name(self) -> str:
        random.seed()
        letters: List[str] = random.sample("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 2)
        digits: List[str] = random.sample("0123456789", 3)

        return "".join(letters + digits)
