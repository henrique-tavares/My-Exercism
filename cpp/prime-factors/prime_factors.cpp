#include "prime_factors.h"

using namespace std;

namespace prime_factors
{
    bool is_prime(const vector<int> &, int);

    vector<int> of(int num)
    {
        vector<int> primes;
        vector<int> prime_factors;

        for (int maybe = 2; maybe <= num; maybe++)
        {
            if (is_prime(primes, maybe))
            {
                primes.push_back(maybe);
            }

            while (num % primes.back() == 0)
            {
                prime_factors.push_back(primes.back());
                num /= primes.back();
            }

            if (num == 1)
            {
                break;
            }
        }

        return prime_factors;
    }

    bool is_prime(const vector<int> &primes, int maybe_prime)
    {
        for (int prime : primes)
        {
            if (maybe_prime % prime == 0)
            {
                return false;
            }
        }

        return true;
    }
} // namespace prime_factors
