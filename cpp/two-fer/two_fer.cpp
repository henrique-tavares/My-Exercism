#include "two_fer.h"

using namespace std;

namespace two_fer
{
    const string two_fer()
    {
        return "One for you, one for me.";
    }

    const string two_fer(const string &name)
    {
        return "One for " + name + ", one for me.";
    }
} // namespace two_fer
