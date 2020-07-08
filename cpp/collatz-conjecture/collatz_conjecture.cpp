#include "collatz_conjecture.h"

namespace collatz_conjecture
{
    int steps(int num)
    {
        if (num < 1)
        {
            throw std::domain_error("Invalid arguments");
        }

        int steps = 0;

        while (num > 1)
        {
            (num % 2 == 0) ? num /= 2 : num = 3 * num + 1;

            steps++;
        }

        return steps;
    }
} // namespace collatz_conjecture
