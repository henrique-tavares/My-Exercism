#include "nucleotide_count.h"

// using namespace std;

namespace nucleotide_count
{
    counter::counter(const std::string &dna)
    {
        for (auto nucleotide : dna)
        {
            if (nucleotides.count(nucleotide) == 0)
            {
                throw std::invalid_argument("Invalid nucleotide");
            }

            nucleotides[nucleotide]++;
        }
    }

    int counter::count(const char &nucleotide) const
    {
        if (nucleotides.count(nucleotide) == 0)
        {
            throw std::invalid_argument("Invalid nucleotide");
        }

        return nucleotides.at(nucleotide);
    }

    std::map<char, int> counter::nucleotide_counts() const
    {
        return nucleotides;
    }
} // namespace nucleotide_count
