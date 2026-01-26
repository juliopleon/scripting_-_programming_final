#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"
using namespace std;

class Student
{
public:
    Student();
    void SetStudentID(string student_ID) { studentID = student_ID; }
    void SetFirst(string firstName) { first = firstName; }
    void SetLast(string lastName) { last = lastName; }
    void SetEmail(string emailAddress) { email = emailAddress; }
    void SetAge(int yearsAge) { age = yearsAge; }
    void DaysCompletedCourse(int daysCompleteCourse[3]);
    void SetProgram(DegreeProgram degreeProgram);
    string GetStudentID() const { return studentID; }
    string GetFirstName() const { return first; }
    string GetLastName() const { return last; }
    string GetEmailAddress() const { return email; }
    int GetAge() const { return age; }
    const int *GetDaysToComplete() const { return days; }
    DegreeProgram GetProgram() const { return degree; }
    void Print();

private:
    string studentID;
    string first;
    string last;
    string email;
    int age;
    int days[3];
    DegreeProgram degree;
};

#endif