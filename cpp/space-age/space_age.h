#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#include <map>
#include <string>

namespace space_age
{
    const std::map<std::string, double> PLANETS_CONVERTION = {
        {"mercury", 0.2408467 * 31557600},
        {"venus", 0.61519726 * 31557600},
        {"earth", 31557600},
        {"mars", 1.8808158 * 31557600},
        {"jupiter", 11.862615 * 31557600},
        {"saturn", 29.447498 * 31557600},
        {"uranus", 84.016846 * 31557600},
        {"neptune", 164.79132 * 31557600},
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

#endif // SPACE_AGE_H