#include "raindrops.h"

using namespace std;

namespace raindrops
{
    string convert(int num)
    {
        string rain_sounds = "";

        rain_sounds += (num % 3 == 0) ? "Pling" : "";
        rain_sounds += (num % 5 == 0) ? "Plang" : "";
        rain_sounds += (num % 7 == 0) ? "Plong" : "";

        return (rain_sounds.empty()) ? to_string(num) : rain_sounds;
    }
} // namespace raindrops
