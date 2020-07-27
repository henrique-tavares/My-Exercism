#include "binary_search.h"

#include <stdexcept>

using namespace std;

namespace binary_search
{
    size_t recurssive_find(const vector<int> &data, int num, int index, int relative_size)
    {
        if (relative_size % 2 == 0)
        {
            int index2 = index - 1;
            relative_size--;

            if (data[index] == num)
            {
                return index;
            }
            else if (data[index2] == num)
            {
                return index2;
            }
            else if (relative_size == 1)
            {
                throw domain_error("not found");
            }
            else if (num < data[index2])
            {
                relative_size /= 2;
                index2 -= (relative_size % 2 == 0) ? relative_size / 2 : (relative_size / 2) + 1;

                return recurssive_find(data, num, index2, relative_size);
            }
            else
            {
                relative_size /= 2;
                index += (relative_size / 2) + 1;

                return recurssive_find(data, num, index, relative_size);
            }
        }
        else
        {
            if (data[index] == num)
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

                return recurssive_find(data, num, index, relative_size);
            }
            else
            {
                relative_size /= 2;
                index += (relative_size / 2) + 1;

                return recurssive_find(data, num, index, relative_size);
            }
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
