#pragma once

#include <string>

namespace phone_number
{
    class phone_number
    {
    public:
        phone_number(const std::string &);

        std::string number() const;
        std::string area_code() const;

        operator std::string() const;

    private:
        std::string _number;
    };
} // namespace phone_number
