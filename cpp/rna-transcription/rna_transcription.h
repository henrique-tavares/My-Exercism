#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H

#include <string>
#include <algorithm>

namespace rna_transcription
{
    std::string to_rna(std::string dna);
    char to_rna(char dna);
} // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H