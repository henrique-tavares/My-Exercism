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
        // numbers from 1-19

        map<int, string> distinct_numbers = {
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
        };

        if (distinct_numbers.count(num) != 0)
        {
            return distinct_numbers[num];
        }

        // numbers from 20-99

        if (num >= 20 && num < 30)
        {
            return (num == 20) ? "twenty" : "twenty-" + to_english(num - 20);
        }

        if (num >= 30 && num < 40)
        {
            return (num == 30) ? "thirty" : "thirty-" + to_english(num - 30);
        }

        if (num >= 40 && num < 50)
        {
            return (num == 40) ? "forty" : "forty-" + to_english(num - 40);
        }

        if (num >= 50 && num < 60)
        {
            return (num == 50) ? "fifty" : "fifty-" + to_english(num - 50);
        }

        if (num >= 60 && num < 70)
        {
            return (num == 60) ? "sixty" : "sixty-" + to_english(num - 60);
        }

        if (num >= 70 && num < 80)
        {
            return (num == 70) ? "seventy" : "seventy-" + to_english(num - 70);
        }

        if (num >= 80 && num < 90)
        {
            return (num == 80) ? "eighty" : "eighty-" + to_english(num - 80);
        }

        if (num >= 90 && num < 100)
        {
            return (num == 90) ? "ninety" : "ninety-" + to_english(num - 90);
        }

        // numbers from 100-999

        if (num >= 100 && num < 1000)
        {
            return to_english(num / 100) + " hundred " + to_english(num % 100);
        }

        return "";
    }
} // namespace say
