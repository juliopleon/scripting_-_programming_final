#include <iostream>
#include <string>
#include <vector>
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
    void CompletedCourse(vector<int> daysCompleteCourse) { days = daysCompleteCourse; }
    void SetProgram(DegreeProgram);
    string GetStudentID() const;
    string GetFirstName() const;
    string GetLastName() const;
    string GetEmailAddress() const;
    int GetAge() const;
    vector<int> GetDaysToComplete() const;
    DegreeProgram GetProgram() const;
    void Print();

private:
    string studentID;
    string first;
    string last;
    string email;
    int age;
    vector<int> days;
    DegreeProgram program;
};

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
    cout << studentID << "\t" << "First Name: " << first << "Last Name: " << last << "\t" << "Email: " << email << "\t" << "Age: " << age << "\t" << "daysInCourse: " << "{";
    for (int i = 0; i < days.size(); ++i)
    {
        int currDay = days.at(i)
    };
};