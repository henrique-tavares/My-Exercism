#include "robot_name.h"

using namespace std;

namespace robot_name
{
    robot::robot()
    {
        _name = generate_name();
    }

    string robot::name() const
    {
        return _name;
    }

    void robot::reset()
    {
        _name = generate_name();
    }

    string robot::generate_name() const
    {
        random_device generator;

        uniform_int_distribution<char> letters('A', 'Z');
        uniform_int_distribution<char> digits('0', '9');

        return string{
            letters(generator),
            letters(generator),
            digits(generator),
            digits(generator),
            digits(generator),
        };
    }
} // namespace robot_name
