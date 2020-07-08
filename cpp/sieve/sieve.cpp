#include "sieve.h"

using namespace std;

namespace sieve
{
    vector<int> primes(int limit)
    {
        vector<int> prime_vec((limit < 2) ? 0 : limit - 1);
        iota(prime_vec.begin(), prime_vec.end(), 2);

        for (int i = 2; (i * i) <= limit; i++)
        {
            for (int j = 2 * i; j <= limit; j += i)
            {
                prime_vec[j - 2] = 0;
            }
        }

        prime_vec.erase(remove(prime_vec.begin(), prime_vec.end(), 0), prime_vec.end());

        return prime_vec;
    }
} // namespace sieve
