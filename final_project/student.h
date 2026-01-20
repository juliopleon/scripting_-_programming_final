#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include "degree.h"
using namespace std;

class Student
{
public:
    Student();
    void setStudentID(string student_ID) { studentID = student_ID; }
    void setFirst(string firstName) { first = firstName; }
    void setLast(string lastName) { last = lastName; }
    void setEmail(string emailAddress) { email = emailAddress; }
    void setAge(int age) { age = age; }
    void daysCompletedCourse(vector<int> daysCompleteCourse) { days = daysCompleteCourse; }
    void setProgram(DegreeProgram);
    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    vector<int> getDaysToComplete() const;
    DegreeProgram getProgram() const;
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

#endif