#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include <utility>
#include <stdexcept>

namespace queen_attack
{
    class chess_board
    {
    private:
        std::pair<int, int> white_queen;
        std::pair<int, int> black_queen;

    public:
        chess_board();
        chess_board(const std::pair<int, int> &, const std::pair<int, int> &);
        std::pair<int, int> white() const;
        std::pair<int, int> black() const;
        bool can_attack() const;
        operator std::string() const;
    };
} // namespace queen_attack

#endif // QUEEN_ATTACK_H