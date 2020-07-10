#include "secret_handshake.h"

using namespace std;

namespace secret_handshake
{
    vector<string> commands(const int &code)
    {
        bitset<32> code_bit(code);
        vector<string> commands;

        for (size_t i = 0; i < code_bit.size() && i < 5; i++)
        {
            if (!code_bit.test(i))
            {
                continue;
            }

            if (HANDSHAKES.at((int)pow(2, i)) == "reverse")
            {
                commands = {commands.rbegin(), commands.rend()};
            }
            else
            {
                commands.push_back(HANDSHAKES.at((int)pow(2, i)));
            }
        }

        return commands;
    }
} // namespace secret_handshake
