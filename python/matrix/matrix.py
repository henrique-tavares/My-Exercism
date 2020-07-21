import numpy as np
from typing import List


class Matrix:
    def __init__(self, matrix_string: str):
        self._rows: List[List[int]] = []

        for raw_row in matrix_string.split("\n"):
            self._rows.append([int(num) for num in raw_row.split(" ")])

        self._columns: List[List[int]] = np.transpose(self._rows).tolist()

    def row(self, index: int) -> List[int]:
        return self._rows[index - 1]

    def column(self, index: int) -> List[int]:
        return self._columns[index - 1]
