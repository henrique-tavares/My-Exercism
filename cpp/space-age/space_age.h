#pragma once

#include <map>
#include <string>

namespace space_age
{
    constexpr int EARTH_YEAR_SECONDS = 31557600;

    const std::map<std::string, double> PLANETS_CONVERTION = {
        {"mercury", 0.2408467},
        {"venus", 0.61519726},
        {"earth", 1},
        {"mars", 1.8808158},
        {"jupiter", 11.862615},
        {"saturn", 29.447498},
        {"uranus", 84.016846},
        {"neptune", 164.79132},
    };

    class space_age
    {
    private:
        double _seconds;

    public:
        space_age(const unsigned long long &);
        double seconds() const;
        double on_mercury() const;
        double on_venus() const;
        double on_earth() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;
    };
} // namespace space_age
