#include "allergies.h"

using namespace std;

namespace allergies
{
    allergy_test::allergy_test(const int &score)
    {
        bitset<32> score_bit(score);

        for (size_t i = 0; i < score_bit.size() && i < 8; i++)
        {
            if (!score_bit.test(i))
            {
                continue;
            }

            if (ALLERGIES.count((int)pow(2, i)))
            {
                allergies.insert(ALLERGIES.at((int)pow(2, i)));
            }
        }
    }

    bool allergy_test::is_allergic_to(const string &allergy)
    {
        return allergies.count(allergy);
    }

    unordered_set<std::string> allergy_test::get_allergies()
    {
        return allergies;
    }
} // namespace allergies
