#include "student.h"
using namespace std;

Student::Student()
{
    studentID = "NULL";
    first = "NoFirst";
    last = "NoLast";
    email = "unknown@unknown.com";
    age = -1;
    days = {};
    program = DP_SOFTWARE;
};

void Student::Print()
{
    cout << studentID << "\t" << "First Name: " << first << "Last Name: " << last << "\t" << "Email: " << email << "\t" << "Age: " << age << "\t" << "daysInCourse: ";
    cout << "{";
    for (int i = 0; i < days.size(); ++i)
    {
        cout << days.at(i);

        if (!days.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "} ";
    cout << "Degree" << endl;
    cout << "\t" << "Program: " << program << endl;
};
