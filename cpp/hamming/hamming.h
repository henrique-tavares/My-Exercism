#if !defined(HAMMING_H)
#define HAMMING_H

#include <string>

namespace hamming
{
    unsigned int compute(const std::string &dna_1, const std::string &dna_2);
} // namespace hamming

#endif // HAMMING_H