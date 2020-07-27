#include "trinary.h"

using namespace std;

#include <cmath>

namespace trinary
{
    int to_decimal(const string &num)
    {
        int decimal = 0;

        for (size_t i = 0; i < num.size(); i++)
        {
            char digit = num[i];

            if (!isdigit(digit) || (atoi(&digit) < 0 || atoi(&digit) > 2))
            {
                return 0;
            }

            decimal += atoi(&digit) * (int)pow(3, num.size() - i - 1);
        }

        return decimal;
    }
} // namespace trinary
