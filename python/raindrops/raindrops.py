def convert(number: int) -> str:
    rain_sound: str = ""

    rain_sound += "Pling" if number % 3 == 0 else ""
    rain_sound += "Plang" if number % 5 == 0 else ""
    rain_sound += "Plong" if number % 7 == 0 else ""

    return rain_sound or str(number)
