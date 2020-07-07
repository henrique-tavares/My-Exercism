#if !defined(SAY_H)
#define SAY_H

#include <string>
#include <vector>
#include <stdexcept>
#include <map>

namespace say
{
    std::string in_english(unsigned long long num);
    std::string to_english(int num);
} // namespace say

#endif // SAY_H