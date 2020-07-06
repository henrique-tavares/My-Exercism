#include "grade_school.h"

using namespace std;

namespace grade_school
{
    map<int, vector<string>> school::roster() const
    {
        return grades;
    }

    void school::add(const string &name, int grade)
    {
        grades[grade].insert(upper_bound(grades[grade].begin(), grades[grade].end(), name), name);
    }

    vector<string> school::grade(int grade) const
    {
        return (grades.count(grade)) ? grades.at(grade) : vector<string>{};
    }
} // namespace grade_school
