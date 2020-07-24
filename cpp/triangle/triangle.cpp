#include "triangle.h"

#include <cmath>
#include <stdexcept>

namespace triangle
{
    bool is_valid(const double &a, const double &b, const double &c)
    {
        if (a <= 0 || b <= 0 || c <= 0)
        {
            return false;
        }
        else if (pow(pow(a, 2) + pow(b, 2) + pow(c, 2), 2) > 2 * (pow(a, 4) + pow(b, 4) + pow(c, 4)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    flavor kind(const double &a, const double &b, const double &c)
    {
        if (!is_valid(a, b, c))
        {
            throw std::domain_error("Invalid triangle");
        }

        if (a == b && b == c)
        {
            return flavor::equilateral;
        }
        else if (a != b && b != c && a != c)
        {
            return flavor::scalene;
        }
        else
        {
            return flavor::isosceles;
        }
    }
} // namespace triangle
