#include "gigasecond.h"

namespace gigasecond
{
    ptime advance(const ptime &time)
    {
        return time + seconds(GIGASECOND);
    }
} // namespace gigasecond
