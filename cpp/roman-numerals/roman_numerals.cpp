#include "roman_numerals.h"

#include <vector>
#include <cmath>

using namespace std;

namespace roman_numerals
{
    string convert(int num)
    {
        string roman_number = "";

        while (num >= 1000)
        {
            roman_number += "M";
            num -= 1000;
        }

        for (int x : vector<int>{2, 1, 0})
        {
            for (int i = 1; i < 10; i++)
            {
                if (num >= i * static_cast<int>(pow(10, x)) && num < (i + 1) * static_cast<int>(pow(10, x)))
                {
                    switch (i)
                    {
                    case 1:
                        switch (x)
                        {
                        case 2:
                            roman_number += "C";
                            break;
                        case 1:
                            roman_number += "X";
                            break;
                        case 0:
                            roman_number += "I";
                            break;
                        }
                        break;

                    case 2:
                        switch (x)
                        {
                        case 2:
                            roman_number += "CC";
                            break;
                        case 1:
                            roman_number += "XX";
                            break;
                        case 0:
                            roman_number += "II";
                            break;
                        }
                        break;

                    case 3:
                        switch (x)
                        {
                        case 2:
                            roman_number += "CCC";
                            break;
                        case 1:
                            roman_number += "XXX";
                            break;
                        case 0:
                            roman_number += "III";
                            break;
                        }
                        break;

                    case 4:
                        switch (x)
                        {
                        case 2:
                            roman_number += "CD";
                            break;
                        case 1:
                            roman_number += "XL";
                            break;
                        case 0:
                            roman_number += "IV";
                            break;
                        }
                        break;

                    case 5:
                        switch (x)
                        {
                        case 2:
                            roman_number += "D";
                            break;
                        case 1:
                            roman_number += "L";
                            break;
                        case 0:
                            roman_number += "V";
                            break;
                        }
                        break;

                    case 6:
                        switch (x)
                        {
                        case 2:
                            roman_number += "DC";
                            break;
                        case 1:
                            roman_number += "LX";
                            break;
                        case 0:
                            roman_number += "VI";
                            break;
                        }
                        break;

                    case 7:
                        switch (x)
                        {
                        case 2:
                            roman_number += "DCC";
                            break;
                        case 1:
                            roman_number += "LXX";
                            break;
                        case 0:
                            roman_number += "VII";
                            break;
                        }
                        break;

                    case 8:
                        switch (x)
                        {
                        case 2:
                            roman_number += "DCCC";
                            break;
                        case 1:
                            roman_number += "LXXX";
                            break;
                        case 0:
                            roman_number += "VIII";
                            break;
                        }
                        break;

                    case 9:
                        switch (x)
                        {
                        case 2:
                            roman_number += "CM";
                            break;
                        case 1:
                            roman_number += "XC";
                            break;
                        case 0:
                            roman_number += "IX";
                            break;
                        }
                        break;
                    }

                    num -= i * static_cast<int>(pow(10, x));
                    break;
                }
            }
        }

        return roman_number;
    }
} // namespace roman_numerals
