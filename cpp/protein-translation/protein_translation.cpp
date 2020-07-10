#include "protein_translation.h"

using namespace std;

namespace protein_translation
{
    vector<string> proteins(const string &proteins)
    {
        vector<string> translated;

        for (size_t i = 0; i < proteins.size() - 2; i += 3)
        {
            string protein = proteins.substr(i, 3);

            if (TRANSLATIONS.count(protein))
            {
                if (TRANSLATIONS.at(protein) == "STOP")
                {
                    break;
                }

                translated.push_back(TRANSLATIONS.at(protein));
            }
        }

        return translated;
    }
} // namespace protein_translation
