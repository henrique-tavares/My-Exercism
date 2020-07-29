#include "grains.h"

#include <cmath>
#include <limits>

namespace grains
{
    unsigned long long square(int num)
    {
        return (unsigned long long)std::pow(2, num - 1);
    }

    unsigned long long total()
    {
        return std::numeric_limits<unsigned long long>::max();
    }
} // namespace grains
