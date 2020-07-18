from typing import List


def proteins(strand: str) -> List[str]:
    PROTEIN_TRANSLATION = {
        "AUG": "Methionine",
        "UUU": "Phenylalanine",
        "UUC": "Phenylalanine",
        "UUA": "Leucine",
        "UUG": "Leucine",
        "UCU": "Serine",
        "UCC": "Serine",
        "UCA": "Serine",
        "UCG": "Serine",
        "UAU": "Tyrosine",
        "UAC": "Tyrosine",
        "UGU": "Cysteine",
        "UGC": "Cysteine",
        "UGG": "Tryptophan",
        "UAA": "STOP",
        "UAG": "STOP",
        "UGA": "STOP",
    }

    proteins: List[str] = []

    for i in range(0, len(strand), 3):
        rna_sequence: str = strand[i : i + 3]

        if rna_sequence in PROTEIN_TRANSLATION.keys():
            if PROTEIN_TRANSLATION[rna_sequence] == "STOP":
                break

            proteins.append(PROTEIN_TRANSLATION[rna_sequence])

    return proteins
