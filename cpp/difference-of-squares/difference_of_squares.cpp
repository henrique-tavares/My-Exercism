#include "difference_of_squares.h"

namespace difference_of_squares
{
    int square_of_sum(int n)
    {
        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }

        return sum * sum;
    }

    int sum_of_squares(int n)
    {
        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            sum += (i * i);
        }

        return sum;
    }

    int difference(int n)
    {
        return abs(sum_of_squares(n) - square_of_sum(n));
    }
} // namespace difference_of_squares
