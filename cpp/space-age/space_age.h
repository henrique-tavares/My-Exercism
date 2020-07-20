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
    public:
        space_age(const unsigned long long &);

        // Returns the age in seconds
        double seconds() const;

        // Converts the age in seconds into mercury years
        double on_mercury() const;

        // Converts the age in seconds into venus years
        double on_venus() const;

        // Converts the age in seconds into earth years
        double on_earth() const;

        // Converts the age in seconds into mars years
        double on_mars() const;

        // Converts the age in seconds into jupiter years
        double on_jupiter() const;

        // Converts the age in seconds into saturn years
        double on_saturn() const;

        // Converts the age in seconds into uranus years
        double on_uranus() const;

        // Converts the age in seconds into neptune years
        double on_neptune() const;

    private:
        double _seconds;
    };
} // namespace space_age
