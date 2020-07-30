#include "grains.h"

namespace grains
{
    unsigned long long square(int num)
    {
        return 1ULL << (num - 1); // 2^(num - 1)
    }

    unsigned long long total()
    {
        return (2ULL << 63) - 1; // 2^64 - 1
    }
} // namespace grains
