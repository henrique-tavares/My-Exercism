#include "queen_attack.h"

using namespace std;

namespace queen_attack
{
    chess_board::chess_board()
    {
        white_queen = make_pair(0, 3);
        black_queen = make_pair(7, 3);
    }

    chess_board::chess_board(const pair<int, int> &white, const pair<int, int> &black)
    {
        if (white == black)
        {
            throw domain_error("Invalid arguments");
        }

        white_queen = white;
        black_queen = black;
    }

    pair<int, int> chess_board::white() const
    {
        return white_queen;
    }

    pair<int, int> chess_board::black() const
    {
        return black_queen;
    }

    bool chess_board::can_attack() const
    {
        if (white_queen.first == black_queen.first || white_queen.second == black_queen.second)
        {
            return true;
        }
        if (abs(white_queen.first - black_queen.first) == abs(white_queen.second - black_queen.second))
        {
            return true;
        }

        return false;
    }

    chess_board::operator std::string() const
    {
        string s_board;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j <= 15; j++)
            {
                if (j == 15)
                {
                    s_board.push_back('\n');
                }
                else if (j % 2 == 0)
                {
                    if (white_queen.first == i && white_queen.second == (j / 2))
                    {
                        s_board.push_back('W');
                    }
                    else if (black_queen.first == i && black_queen.second == (j / 2))
                    {
                        s_board.push_back('B');
                    }
                    else
                    {
                        s_board.push_back('_');
                    }
                }
                else
                {
                    s_board.push_back(' ');
                }
            }
        }

        return s_board;
    }
} // namespace queen_attack
