#include "food_chain.h"

#include <map>

using namespace std;

namespace food_chain
{
    struct animal
    {
        string name;
        string phrase;
    };

    const map<int, animal> animals = {
        {1, {"fly", "I don't know why she swallowed the fly. Perhaps she'll die.\n"}},
        {2, {"spider", "It wriggled and jiggled and tickled inside her.\n"}},
        {3, {"bird", "How absurd to swallow a bird!\n"}},
        {4, {"cat", "Imagine that, to swallow a cat!\n"}},
        {5, {"dog", "What a hog, to swallow a dog!\n"}},
        {6, {"goat", "Just opened her throat and swallowed a goat!\n"}},
        {7, {"cow", "I don't know how she swallowed a cow!\n"}},
        {8, {"horse", "She's dead, of course!\n"}},
    };

    string verse(int num)
    {
        string verse = "I know an old lady who swallowed a " + animals.at(num).name + ".\n" + animals.at(num).phrase;

        if (animals.at(num).name == "horse" || animals.at(num).name == "fly")
        {
            return verse;
        }

        for (int i = num; i >= 2; i--)
        {
            verse += "She swallowed the " + animals.at(i).name + " to catch the " + animals.at(i - 1).name;

            if (animals.at(i - 1).name == "spider")
            {
                verse += " that wriggled and jiggled and tickled inside her";
            }

            verse += ".\n";
        }

        verse += animals.at(1).phrase;

        return verse;
    }

    string verses(int start, int end)
    {
        string verses = "";

        for (int i = start; i <= end; i++)
        {
            verses += verse(i) + "\n";
        }

        return verses;
    }

    string sing()
    {
        return verses(1, 8);
    }
} // namespace food_chain
