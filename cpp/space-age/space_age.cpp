#include "space_age.h"

namespace space_age
{
    space_age::space_age(const unsigned long long &seconds)
    {
        _seconds = seconds;
    }

    double space_age::seconds() const
    {
        return _seconds;
    }

    double space_age::on_mercury() const
    {
        return _seconds / PLANETS_CONVERTION.at("mercury");
    }

    double space_age::on_venus() const
    {
        return _seconds / PLANETS_CONVERTION.at("venus");
    }

    double space_age::on_earth() const
    {
        return _seconds / PLANETS_CONVERTION.at("earth");
    }

    double space_age::on_mars() const
    {
        return _seconds / PLANETS_CONVERTION.at("mars");
    }

    double space_age::on_jupiter() const
    {
        return _seconds / PLANETS_CONVERTION.at("jupiter");
    }

    double space_age::on_saturn() const
    {
        return _seconds / PLANETS_CONVERTION.at("saturn");
    }

    double space_age::on_uranus() const
    {
        return _seconds / PLANETS_CONVERTION.at("uranus");
    }

    double space_age::on_neptune() const
    {
        return _seconds / PLANETS_CONVERTION.at("neptune");
    }
} // namespace space_age
