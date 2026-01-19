#include <iostream>
#include <string>
#include <vector>
#include "degree.h"
using namespace std;

class Student
{
public:
    void SetStudentID(string student_ID) { studentID = student_ID; }
    void SetFirst(string firstName) { first = firstName; }
    void SetLast(string lastName) { last = lastName; }
    void SetEmail(string emailAddress) { email = emailAddress; }
    void SetAge(int yearsAge) { age = yearsAge; }
    void CompletedCourse(vector<int> daysCompleteCourse) { days = daysCompleteCourse; }
    void SetProgram(DegreeProgram);
    string GetStudentID() const;
    string GetFirstName() const;
    string GetLastName() const;
    string GetEmailAddress() const;
    int GetAge() const;
    int GetDaysToComplete() const;
    DegreeProgram GetProgram() const;

private:
    string studentID;
    string first;
    string last;
    string email;
    int age;
    vector<int> days;
    DegreeProgram program;
};