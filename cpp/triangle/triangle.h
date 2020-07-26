#pragma once

namespace triangle
{
    enum class flavor
    {
        equilateral,
        isosceles,
        scalene
    };

    flavor kind(const double &a, const double &b, const double &c);
} // namespace triangle