#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"
#include <cctype>
#include <vector>
#include <array>
using namespace std;

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
    Student *studentObj = new Student();
    int daysArray[3];

    studentObj->SetStudentID(studentID);
    studentObj->SetFirstName(firstName);
    studentObj->SetLastName(lastName);
    studentObj->SetEmail(emailAddress);
    studentObj->SetAge(age);
    daysArray[0] = daysInCourse1;
    daysArray[1] = daysInCourse2;
    daysArray[2] = daysInCourse3;
    studentObj->SetDaysCompleteCourse(daysArray);
    studentObj->SetDegreeProgram(degreeProgram);

    classRosterArray.push_back(studentObj);
}

void Roster::remove(string studentID)
{
    bool found = false;
    for (int i = 0; i < classRosterArray.size(); ++i)
    {
        if (found == false)
        {
            string currStudent = classRosterArray[i]->GetStudentID();
            if (currStudent == studentID)
            {
                delete classRosterArray[i];
                classRosterArray.erase(classRosterArray.begin() + i);
                found = true;
            }
        }
    }

    if (found != true)
    {
        cout << "Error: StudentID was not found" << endl
             << endl;
    }
}

void Roster::printAll()
{
    for (int i = 0; i < classRosterArray.size(); ++i)
    {
        classRosterArray[i]->Print();
    }
}

void Roster::printAverageDayInCourse(string studentID)
{
    bool found = false;
    for (int i = 0; i < classRosterArray.size(); ++i)
    {
        string currStudent = classRosterArray[i]->GetStudentID();
        if (currStudent == studentID)
        {
            found = true;
            const int *days = classRosterArray[i]->GetDaysToComplete();

            double average = (days[0] + days[1] + days[2]) / 3.0;
            cout << "Student ID: " << currStudent << " Average days in 3 courses: " << average << endl;
            break;
        }
    }

    if (found == false)
    {
        cout << "Error: 404 NOT FOUND" << endl;
    }
}

void Roster::printInvalidEmails()
{
    for (int i = 0; i < classRosterArray.size(); ++i)
    {
        string studentEmail = classRosterArray[i]->GetEmailAddress();
        if ((studentEmail.find('@') == string::npos) || (studentEmail.find(' ') != string::npos) || (studentEmail.find('.') == string::npos))
        {
            cout << "Invalid Email: " << studentEmail << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
    for (int i = 0; i < classRosterArray.size(); ++i)
    {
        DegreeProgram currStudent = classRosterArray[i]->GetProgram();
        if (currStudent == degreeProgram)
        {
            classRosterArray[i]->Print();
        }
    }
}

Roster::~Roster()
{
    cout << "Destructor called on Roster" << endl;
    for (int i = 0; i < classRosterArray.size(); ++i)
    {
        delete classRosterArray[i];
    }
}
