#include "phone_number.h"

#include <regex>
#include <exception>

using namespace std;

namespace phone_number
{
    phone_number::phone_number(const string &number)
    {
        regex re(R"(\D+)");
        _number = regex_replace(number, re, "");

        if (_number.size() < 10 || _number.size() > 11)
        {
            throw domain_error("Invalid phone number");
        }

        if (_number.size() == 11)
        {
            (_number[0] == '1') ? _number.erase(0, 1) : throw domain_error("Invalid phone number");
        }

        if (_number[0] < '2' || _number[3] < '2')
        {
            throw domain_error("Invalid phone number");
        }
    }

    string phone_number::number() const
    {
        return _number;
    }

    string phone_number::area_code() const
    {
        return _number.substr(0, 3);
    }

    phone_number::operator std::string() const
    {
        return "(" + _number.substr(0, 3) + ") " + _number.substr(3, 3) + "-" + _number.substr(6, 4);
    }
} // namespace phone_number
