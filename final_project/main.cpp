#include "student.h"
#include "degree.h"
#include "roster.h"
#include <string>
#include <iostream>
using namespace std;

string studentTable[5] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Julio,Leon,julioleon.eng@gmail.com,26,14,20,25,SOFTWARE"};
Roster classRoster;

int main()
{

    cout << "Course: Scripting and Programming - Applications — C867 " << "\t" << "Programming language: C++" << endl;
    cout << "StudentID: 012738146 " << "\t" << "Name: Julio Pena Leon" << endl;
    cout << endl;
    for (int i = 0; i < 5; ++i)
    {
        int firstOccurrence = studentTable[i].find(',', 0);
        string studentID = studentTable[i].substr(0, firstOccurrence);
        int secondOccurrence = studentTable[i].find(',', firstOccurrence + 1);
        string firstName = studentTable[i].substr(firstOccurrence + 1, secondOccurrence - firstOccurrence - 1);
        int thirdOccurrence = studentTable[i].find(',', secondOccurrence + 1);
        string lastName = studentTable[i].substr(secondOccurrence + 1, thirdOccurrence - secondOccurrence - 1);
        int fourthOccurrence = studentTable[i].find(',', thirdOccurrence + 1);
        string emailAddress = studentTable[i].substr(thirdOccurrence + 1, fourthOccurrence - thirdOccurrence - 1);
        int fifthOccurrence = studentTable[i].find(',', fourthOccurrence + 1);
        string ageYears = studentTable[i].substr(fourthOccurrence + 1, fifthOccurrence - fourthOccurrence - 1);
        int sixthOccurrence = studentTable[i].find(',', fifthOccurrence + 1);
        string course1 = studentTable[i].substr(fifthOccurrence + 1, sixthOccurrence - fifthOccurrence - 1);
        int seventhOccurrence = studentTable[i].find(',', sixthOccurrence + 1);
        string course2 = studentTable[i].substr(sixthOccurrence + 1, seventhOccurrence - sixthOccurrence - 1);
        int eighthOccurrence = studentTable[i].find(',', seventhOccurrence + 1);
        string course3 = studentTable[i].substr(seventhOccurrence + 1, eighthOccurrence - seventhOccurrence - 1);
        string program = studentTable[i].substr(eighthOccurrence + 1);

        int age = stoi(ageYears);
        int daysInCourse1 = stoi(course1);
        int daysInCourse2 = stoi(course2);
        int daysInCourse3 = stoi(course3);

        DegreeProgram degreeProgram;
        if (program == "SECURITY")
        {
            degreeProgram = DegreeProgram(0);
        }
        else if (program == "NETWORK")
        {
            degreeProgram = DegreeProgram(1);
        }
        else
        {
            degreeProgram = DegreeProgram(2);
        }

        classRoster.add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
    }

    classRoster.printAll();

    classRoster.printInvalidEmails();

    for (int i = 0; i < 5; ++i)
    {
        int firstOccurrence = studentTable[i].find(',', 0);
        string studentID = studentTable[i].substr(0, firstOccurrence);
        classRoster.printAverageDayInCourse(studentID);
    }

    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");

    return 0;
}