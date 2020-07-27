#pragma once

#include <string>

namespace atbash_cipher
{
    std::string encode(const std::string &text);
    std::string decode(const std::string &text);
} // namespace atbash_cipher
