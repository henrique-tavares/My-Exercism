#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <stdexcept>

namespace grade_school
{
    class school
    {
    private:
        std::map<int, std::vector<std::string>> grades;

    public:
        std::map<int, std::vector<std::string>> roster() const;
        void add(const std::string &name, int grade);
        std::vector<std::string> grade(int grade) const;
    };
} // namespace grade_school

#endif // GRADE_SCHOOL_H