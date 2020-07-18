from typing import Set


def is_pangram(sentence: str) -> bool:
    alphabet: str = "abcdefghijklmnopqrstuvwxyz"
    letters: Set[str] = {letter for letter in sentence.lower() if letter in alphabet}

    return len(letters) == len(alphabet)
