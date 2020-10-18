#include "meetup.h"

namespace meetup
{
    scheduler::scheduler(const boost::date_time::months_of_year &month, const int &year)
    {
        this->month = month;
        this->year = year;
    }

    boost::gregorian::date scheduler::monteenth() const
    {
        for (int day = 13; day <= 19; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Monday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::tuesteenth() const
    {
        for (int day = 13; day <= 19; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Tuesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::wednesteenth() const
    {
        for (int day = 13; day <= 19; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Wednesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::thursteenth() const
    {
        for (int day = 13; day <= 19; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Thursday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::friteenth() const
    {
        for (int day = 13; day <= 19; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Friday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::saturteenth() const
    {
        for (int day = 13; day <= 19; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Saturday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::sunteenth() const
    {
        for (int day = 13; day <= 19; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Sunday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::first_monday() const
    {
        for (int day = 1; day <= 7; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Monday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::first_tuesday() const
    {
        for (int day = 1; day <= 7; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Tuesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::first_wednesday() const
    {
        for (int day = 1; day <= 7; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Wednesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::first_thursday() const
    {
        for (int day = 1; day <= 7; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Thursday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::first_friday() const
    {
        for (int day = 1; day <= 7; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Friday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::first_saturday() const
    {
        for (int day = 1; day <= 7; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Saturday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::first_sunday() const
    {
        for (int day = 1; day <= 7; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Sunday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::second_monday() const
    {
        for (int day = 1 + 7; day <= 7 * 2; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Monday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::second_tuesday() const
    {
        for (int day = 1 + 7; day <= 7 * 2; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Tuesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::second_wednesday() const
    {
        for (int day = 1 + 7; day <= 7 * 2; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Wednesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::second_thursday() const
    {
        for (int day = 1 + 7; day <= 7 * 2; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Thursday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::second_friday() const
    {
        for (int day = 1 + 7; day <= 7 * 2; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Friday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::second_saturday() const
    {
        for (int day = 1 + 7; day <= 7 * 2; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Saturday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::second_sunday() const
    {
        for (int day = 1 + 7; day <= 7 * 2; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Sunday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::third_monday() const
    {
        for (int day = 1 + (7 * 2); day <= 7 * 3; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Monday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::third_tuesday() const
    {
        for (int day = 1 + (7 * 2); day <= 7 * 3; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Tuesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::third_wednesday() const
    {
        for (int day = 1 + (7 * 2); day <= 7 * 3; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Wednesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::third_thursday() const
    {
        for (int day = 1 + (7 * 2); day <= 7 * 3; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Thursday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::third_friday() const
    {
        for (int day = 1 + (7 * 2); day <= 7 * 3; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Friday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::third_saturday() const
    {
        for (int day = 1 + (7 * 2); day <= 7 * 3; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Saturday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::third_sunday() const
    {
        for (int day = 1 + (7 * 2); day <= 7 * 3; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Sunday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::fourth_monday() const
    {
        for (int day = 1 + (7 * 3); day <= 7 * 4; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Monday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::fourth_tuesday() const
    {
        for (int day = 1 + (7 * 3); day <= 7 * 4; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Tuesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::fourth_wednesday() const
    {
        for (int day = 1 + (7 * 3); day <= 7 * 4; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Wednesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::fourth_thursday() const
    {
        for (int day = 1 + (7 * 3); day <= 7 * 4; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Thursday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::fourth_friday() const
    {
        for (int day = 1 + (7 * 3); day <= 7 * 4; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Friday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::fourth_saturday() const
    {
        for (int day = 1 + (7 * 3); day <= 7 * 4; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Saturday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::fourth_sunday() const
    {
        for (int day = 1 + (7 * 3); day <= 7 * 4; day++)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Sunday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::last_monday() const
    {
        int last_day_of_month = boost::gregorian::date(year, month, 1).end_of_month().day().as_number();

        for (int day = last_day_of_month; day > last_day_of_month - 7; day--)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Monday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::last_tuesday() const
    {
        int last_day_of_month = boost::gregorian::date(year, month, 1).end_of_month().day().as_number();

        for (int day = last_day_of_month; day > last_day_of_month - 7; day--)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Tuesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::last_wednesday() const
    {
        int last_day_of_month = boost::gregorian::date(year, month, 1).end_of_month().day().as_number();

        for (int day = last_day_of_month; day > last_day_of_month - 7; day--)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Wednesday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::last_thursday() const
    {
        int last_day_of_month = boost::gregorian::date(year, month, 1).end_of_month().day().as_number();

        for (int day = last_day_of_month; day > last_day_of_month - 7; day--)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Thursday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::last_friday() const
    {
        int last_day_of_month = boost::gregorian::date(year, month, 1).end_of_month().day().as_number();

        for (int day = last_day_of_month; day > last_day_of_month - 7; day--)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Friday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::last_saturday() const
    {
        int last_day_of_month = boost::gregorian::date(year, month, 1).end_of_month().day().as_number();

        for (int day = last_day_of_month; day > last_day_of_month - 7; day--)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Saturday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }

    boost::gregorian::date scheduler::last_sunday() const
    {
        int last_day_of_month = boost::gregorian::date(year, month, 1).end_of_month().day().as_number();

        for (int day = last_day_of_month; day > last_day_of_month - 7; day--)
        {
            boost::gregorian::date d(year, month, day);

            if (boost::gregorian::to_tm(d).tm_wday == boost::gregorian::Sunday)
            {
                return d;
            }
        }

        return boost::gregorian::date{};
    }
} // namespace meetup
