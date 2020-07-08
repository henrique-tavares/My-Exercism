#if !defined(SIEVE_H)
#define SIEVE_H

#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

namespace sieve
{
    std::vector<int> primes(int limit);
} // namespace sieve

#endif // SIEVE_H