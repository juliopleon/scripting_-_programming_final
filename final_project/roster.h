#include <iostream>
#include <string>
#include <array>
#include "student.h"
using namespace std;

class Roster
{
public:
    ~Roster();
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string studentID);                          // if student does not exist print error message - FIX ME
    void printAll();                                        // FIX ME - will loop through each student and print
    void printAverageDayInCourse(string studentID);         // FIX ME - correctly prints the average number of days in the three courses for the student whose studentID is passed in as the parameter
    void printInvalidEmails();                              // FIX ME - verifies student email addresses and displays all invalid email addresses to the user - FIX ME
    void printByDegreeProgram(DegreeProgram degreeProgram); // prints out student information for a degree program specified by an enumerated type
    // Note:  All function signatures must match the task descriptions exactly.- FIX ME
    // The destructor that will release memory claimed by the roster object. - FIX ME

private:
    Student *classRosterArray[5];
};

Roster::~Roster()
{
    // FIX ME - destructor
}