#include "hamming.h"
#include <stdexcept>

using namespace std;

namespace hamming
{
    unsigned int compute(const string &dna_1, const string &dna_2)
    {
        unsigned int distance = 0;

        if (dna_1.length() != dna_2.length())
        {
            throw domain_error("dna strings have different sizes");
        }

        for (string::size_type i = 0; i < dna_1.length(); i++)
        {
            if (dna_1[i] != dna_2[i])
            {
                distance++;
            }
        }

        return distance;
    }
} // namespace hamming
