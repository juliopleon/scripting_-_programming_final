#ifndef ROSTER_H
#define ROSTER_H

#include <string>
#include <vector>
#include "student.h"
using namespace std;

class Roster
{
public:
    ~Roster();
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll();
    void printAverageDayInCourse(string studentID);
    void printInvalidEmails();                              // FIX ME - verifies student email addresses and displays all invalid email addresses to the user - FIX ME
    void printByDegreeProgram(DegreeProgram degreeProgram); // prints out student information for a degree program specified by an enumerated type
    // Note:  All function signatures must match the task descriptions exactly.- FIX ME
    // The destructor that will release memory claimed by the roster object. - FIX ME

private:
    vector<Student *> classRosterArray;
};

#endif