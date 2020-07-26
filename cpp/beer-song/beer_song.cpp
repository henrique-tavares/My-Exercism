#include "beer_song.h"

using namespace std;

#include <vector>

namespace beer_song
{
    string verse(int num)
    {
        if (num == 0)
        {
            return "No more bottles of beer on the wall, no more bottles of beer.\n"
                   "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
        }
        else if (num == 1)
        {
            return "1 bottle of beer on the wall, 1 bottle of beer.\n"
                   "Take it down and pass it around, no more bottles of beer on the wall.\n";
        }
        else if (num == 2)
        {
            return "2 bottles of beer on the wall, 2 bottles of beer.\n"
                   "Take one down and pass it around, 1 bottle of beer on the wall.\n";
        }
        else
        {
            return to_string(num) + " bottles of beer on the wall, " + to_string(num) + " bottles of beer.\n" +
                   "Take one down and pass it around, " + to_string(num - 1) + " bottles of beer on the wall.\n";
        }
    }

    string sing(int start, int end)
    {
        string song = "";

        for (int i = start; i >= end; i--)
        {
            song += verse(i);

            if (i > end)
            {
                song += "\n";
            }
        }

        return song;
    }
} // namespace beer_song
