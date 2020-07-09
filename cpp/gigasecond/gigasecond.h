#if !defined(GIGASECOND_H)
#define GIGASECOND_H

#include <boost/date_time/posix_time/posix_time.hpp>

using namespace boost::posix_time;

namespace gigasecond
{
    const unsigned long long GIGASECOND = 1000000000;

    ptime advance(const ptime &time);
} // namespace gigasecond

#endif // GIGASECOND_H