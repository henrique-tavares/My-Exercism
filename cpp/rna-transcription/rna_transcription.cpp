#include "rna_transcription.h"

using namespace std;

namespace rna_transcription
{
    string to_rna(string dna)
    {
        for (char &it : dna)
        {
            it = to_rna(it);
        }

        return dna;
    }

    char to_rna(char dna)
    {
        switch (dna)
        {
        case 'G':
            return 'C';

        case 'C':
            return 'G';

        case 'T':
            return 'A';

        case 'A':
            return 'U';

        default:
            return dna;
        }
    }
} // namespace rna_transcription
