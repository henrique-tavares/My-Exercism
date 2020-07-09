#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include <map>
#include <bitset>
#include <cmath>
#include <unordered_set>

namespace allergies
{
    const std::map<int, std::string> ALLERGIES = {
        {1, "eggs"},         // 2^0
        {2, "peanuts"},      // 2^1
        {4, "shellfish"},    // 2^2
        {8, "strawberries"}, // 2^3
        {16, "tomatoes"},    // 2^4
        {32, "chocolate"},   // 2^5
        {64, "pollen"},      // 2^6
        {128, "cats"},       // 2^7
    };

    class allergy_test
    {
    private:
        std::unordered_set<std::string> allergies;

    public:
        allergy_test(const int &);
        bool is_allergic_to(const std::string &);
        std::unordered_set<std::string> get_allergies();
    };
} // namespace allergies

#endif // ALLERGIES_H