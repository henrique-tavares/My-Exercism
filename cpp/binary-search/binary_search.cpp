#include "binary_search.h"

#include <stdexcept>

using namespace std;

namespace binary_search
{
    enum class find_order
    {
        first,
        right,
        left
    };

    size_t recurssive_find(const vector<int> &data, int num, int index, int relative_size, find_order order = find_order::first)
    {
        if (relative_size % 2 == 0)
        {
            int index2;
            switch (order)
            {
            case find_order::first:
                index2 = 0;
                break;

            case find_order::right:
                index2 = index + relative_size / 2;
                break;

            case find_order::left:
                index2 = index - relative_size / 2;
                break;
            }

            if (num == data[index2])
            {
                return index2;
            }

            relative_size--;
        }

        if (num == data[index])
        {
            return index;
        }
        else if (relative_size == 1)
        {
            throw domain_error("not found");
        }
        else if (num < data[index])
        {
            relative_size /= 2;
            index -= (relative_size % 2 == 0) ? relative_size / 2 : (relative_size / 2) + 1;

            return recurssive_find(data, num, index, relative_size, find_order::left);
        }
        else
        {
            relative_size /= 2;
            index += (relative_size % 2 == 0) ? relative_size / 2 : (relative_size / 2) + 1;

            return recurssive_find(data, num, index, relative_size, find_order::right);
        }
    }

    size_t find(const vector<int> &data, int num)
    {
        if (data.empty())
        {
            throw domain_error("empty vector");
        }

        return recurssive_find(data, num, data.size() / 2, data.size());
    }
} // namespace binary_search
