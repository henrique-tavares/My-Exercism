#if !defined(SECRET_HANDSHAKE_H)
#define SECRET_HANDSHAKE_H

#include <string>
#include <vector>
#include <map>
#include <bitset>
#include <cmath>

namespace secret_handshake
{
    const std::map<int, std::string> HANDSHAKES = {
        {1, "wink"},            // 2^0
        {2, "double blink"},    // 2^1
        {4, "close your eyes"}, // 2^2
        {8, "jump"},            // 2^3
        {16, "reverse"},        // 2^4
    };

    std::vector<std::string> commands(const int &);
} // namespace secret_handshake

#endif // SECRET_HANDSHAKE_H
