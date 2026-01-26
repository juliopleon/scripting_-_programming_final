#include "student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student()
{
    studentID = "NULL";
    first = "NoFirst";
    last = "NoLast";
    email = "unknown@unknown.com";
    age = -1;
    days[0] = -1;
    days[1] = -1;
    days[2] = -1;
    degree = SOFTWARE;
};

void Student::Print()
{
    cout << studentID << "\t" << "First Name: " << first << "\t" << "Last Name: " << last << "\t" << "Email: " << email << "\t" << "Age: " << age << "\t" << "daysInCourse: ";
    cout << "{";
    for (int i = 0; i < 3; ++i)
    {
        cout << days[i];

        if (i < 2)
        {
            cout << ", ";
        }
    }
    cout << "} ";
    cout << "Degree Program: " << degree << endl; // FIX ME - needs grab enum value and convert it into a string
};

void Student::SetDaysCompleteCourse(int daysCompleteCourse[3])
{
    for (int i = 0; i < 3; ++i)
    {
        days[i] = daysCompleteCourse[i];
    }
};

void Student::SetDegreeProgram(DegreeProgram degreeProgram)
{

    degree = degreeProgram;
}