#pragma once

namespace triangle
{
    enum flavor
    {
        equilateral,
        isosceles,
        scalene
    };

    flavor kind(const double &a, const double &b, const double &c);
} // namespace triangle