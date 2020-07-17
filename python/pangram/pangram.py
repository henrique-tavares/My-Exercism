from typing import Dict


def is_pangram(sentence: str) -> bool:
    alphabet: str = "abcdefghijklmnopqrstuvwxyz"
    letters: Dict[str, bool] = {
        letter: True for letter in sentence.lower() if letter in alphabet
    }

    return len(letters) == len(alphabet)
