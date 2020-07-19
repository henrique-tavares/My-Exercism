def classify(number: int) -> str:
    if number <= 0:
        raise ValueError("Not a natural number")

    aliquot_sum: int = sum([factor for factor in range(1, number) if number % factor == 0])

    if aliquot_sum > number:
        return "abundant"
    elif aliquot_sum < number:
        return "deficient"
    else:
        return "perfect"
