#pragma once

#include <string>

namespace date_independent
{
    class clock
    {
    public:
        clock(const int &, const int &);

        static clock at(int, int);
        clock plus(int);

        operator std::string() const;
        bool operator==(const clock &) const;
        bool operator!=(const clock &) const;

    private:
        int hours;
        int minutes;
    };
} // namespace date_independent
