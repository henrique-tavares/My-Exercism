#include "sum_of_multiples.h"

using namespace std;

namespace sum_of_multiples
{
    bool is_multiple(const vector<int> &, const int &);

    int to(const vector<int> &multiples_of, const int &limit)
    {
        int sum = 0;

        for (int i = 1; i < limit; i++)
        {
            if (is_multiple(multiples_of, i))
            {
                sum += i;
            }
        }

        return sum;
    }

    bool is_multiple(const vector<int> &multiples_of, const int &maybe_multiple)
    {
        for (int multiple_of : multiples_of)
        {
            if (maybe_multiple % multiple_of == 0)
            {
                return true;
            }
        }

        return false;
    }
} // namespace sum_of_multiples
