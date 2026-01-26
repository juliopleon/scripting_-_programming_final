#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"
#include <cctype>
#include <vector>
#include <array>
using namespace std;

Student *studentObj;
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
    studentObj = new Student(studentObj);

    studentObj->SetStudentID(studentID);
    studentObj->SetFirstName(firstName);
    studentObj->SetLastName(lastName);
    studentObj->SetEmail(emailAddress);
    studentObj->SetAge(age);
    studentObj->SetDaysCompleteCourse(daysCompleteCourse[3]);
    studentObj->SetDegreeProgram(degreeProgram);

    classRosterArray.push_back(studentObj);
}
