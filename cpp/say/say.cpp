#include "say.h"

using namespace std;

namespace say
{
    string in_english(unsigned long long num)
    {
        if (num >= 1000000000000)
        {
            throw domain_error("out of range");
        }

        if (num == 0ULL)
        {
            return "zero";
        }

        string englished_number;

        vector<unsigned long long> fields;
        map<unsigned long long, string> number_fields_names = {
            {1, " thousand "},
            {2, " million "},
            {3, " billion "},
        };

        while (num > 0)
        {
            fields.insert(fields.begin(), num % 1000);
            num /= 1000;
        }

        for (size_t i = 0; i < fields.size(); i++)
        {
            if (fields[i] == 0)
            {
                continue;
            }

            englished_number.append(to_english(fields[i]) + number_fields_names[fields.size() - 1 - i]);
        }

        if (englished_number.back() == ' ')
        {
            englished_number.pop_back();
        }

        return englished_number;
    }

    string to_english(int num)
    {
        map<int, string> number_map = {
            {1, "one"},
            {2, "two"},
            {3, "three"},
            {4, "four"},
            {5, "five"},
            {6, "six"},
            {7, "seven"},
            {8, "eigth"},
            {9, "nine"},
            {10, "ten"},
            {11, "eleven"},
            {12, "twelve"},
            {13, "thirteen"},
            {14, "fourteen"},
            {15, "fifteen"},
            {16, "sixteen"},
            {17, "seventeen"},
            {18, "eighteen"},
            {19, "nineteen"},
            {20, "twenty"},
            {30, "thirty"},
            {40, "forty"},
            {50, "fifty"},
            {60, "sixty"},
            {70, "seventy"},
            {80, "eighty"},
            {90, "ninety"},
        };

        if (number_map.count(num))
        {
            return number_map[num];
        }

        if (num > 20 && num < 100)
        {
            return number_map[(num / 10) * 10] + "-" + to_english(num % 10);
        }

        if (num >= 100 && num < 1000)
        {
            return to_english(num / 100) + " hundred " + to_english(num % 100);
        }

        return "";
    }
} // namespace say
