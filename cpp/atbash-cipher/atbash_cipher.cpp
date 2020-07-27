#include "atbash_cipher.h"

using namespace std;

namespace atbash_cipher
{
    string encode(const string &text)
    {
        string encoded_text = "";

        int j = 0;
        for (char c : text)
        {
            c = tolower(c);

            if (isalpha(c))
            {
                encoded_text.push_back((char)(c + (25 - (c - 97) * 2)));
            }
            else if (isdigit(c))
            {
                encoded_text.push_back(c);
            }
            else
            {
                continue;
            }

            if (++j % 5 == 0)
            {
                encoded_text.push_back(' ');
            }
        }

        if (!encoded_text.empty() && encoded_text[encoded_text.size() - 1] == ' ')
        {
            encoded_text.pop_back();
        }

        return encoded_text;
    }

    string decode(const string &text)
    {
        string decoded_text = "";

        for (char c : text)
        {
            c = tolower(c);

            if (isalpha(c))
            {
                decoded_text.push_back((char)(c + (25 - (c - 97) * 2)));
            }
            else if (isdigit(c))
            {
                decoded_text.push_back(c);
            }
        }

        return decoded_text;
    }
} // namespace atbash_cipher
