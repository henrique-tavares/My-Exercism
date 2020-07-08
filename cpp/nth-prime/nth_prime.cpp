#include "nth_prime.h"

using namespace std;

namespace nth_prime
{
    bool is_prime(vector<int> &, int);

    int nth(int n)
    {
        if (n <= 0)
        {
            throw domain_error("Invalid argument");
        }

        vector<int> primes;

        for (int maybe_prime = 2; (int)primes.size() < n; maybe_prime++)
        {
            if (is_prime(primes, maybe_prime))
            {
                primes.push_back(maybe_prime);
            }
        }

        return primes.back();
    }

    bool is_prime(vector<int> &primes, int maybe_prime)
    {
        for (int &prime : primes)
        {
            if (maybe_prime % prime == 0)
            {
                return false;
            }
        }

        return true;
    }
} // namespace nth_prime
