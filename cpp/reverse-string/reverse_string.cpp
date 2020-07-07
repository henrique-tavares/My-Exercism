#include "reverse_string.h"
#include <iostream>

using namespace std;

namespace reverse_string
{
    string reverse_string(string s)
    {
        string reverted;

        for (auto it = s.rbegin(); it != s.rend(); it++)
        {
            reverted.push_back(*it);
        }

        return reverted;
    }
} // namespace reverse_string
