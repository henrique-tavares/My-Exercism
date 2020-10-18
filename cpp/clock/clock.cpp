#include "clock.h"

// #include <f

namespace date_independent
{
    clock::clock(const int &hours, const int &minutes)
    {
        this->hours = hours;
        this->minutes = minutes;
    }

    clock clock::at(int hours, int minutes)
    {
        int extra_hours;

        if (minutes < 0)
        {
            extra_hours = minutes / 60 - 1;
            minutes += ((-minutes / 60) + 1) * 60;
        }
        else
        {
            extra_hours = minutes / 60;
        }
        minutes %= 60;

        hours += extra_hours;

        if (hours < 0)
        {
            hours += ((-hours / 24) + 1) * 24;
        }
        hours %= 24;

        return clock(hours, minutes);
    }

    clock clock::plus(int minutes)
    {
        return clock::at(this->hours, this->minutes + minutes);
    }

    bool clock::operator==(const clock &other) const
    {
        return this->hours == other.hours && this->minutes == other.minutes;
    }

    bool clock::operator!=(const clock &other) const
    {
        return !(*this == other);
    }

    clock::operator std::string() const
    {
        std::string s("");

        s += (hours < 10) ? std::string("0") + std::to_string(hours) : std::to_string(hours);
        s += ":";
        s += (minutes < 10) ? std::string("0") + std::to_string(minutes) : std::to_string(minutes);

        return s;
    }
} // namespace date_independent
