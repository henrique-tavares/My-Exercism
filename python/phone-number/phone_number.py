import re


class PhoneNumber:
    def __init__(self, number: str):
        number = re.sub(r"\D", "", number)

        if len(number) < 10 or len(number) > 11:
            raise ValueError("Invalid phone number")

        elif len(number) == 11:
            if number[0] != "1":
                raise ValueError("Invalid phone number")

            number = number[1:]

        if number[0] < "2" or number[3] < "2":
            raise ValueError("Invalid phone number")

        self._number: str = number

    @property
    def number(self) -> str:
        return self._number

    @property
    def area_code(self) -> str:
        return self.number[:3]

    def pretty(self) -> str:
        return f"({self.number[:3]}) {self.number[3:6]}-{self.number[6:]}"
