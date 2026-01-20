#include <iostream>
#include <string>
#include "student.h"
#include <cctype>
#include <vector>
#include <array>
using namespace std;

vector<string> studentData(5);

string studentTable[5] =

    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",

     "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",

     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",

     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",

     "A5,[firstname],[lastname],[emailaddress],[age],[numberofdaystocomplete3courses], SOFTWARE"};

Student *classRosterArray[5];

studentData.at(0) = studentTable[0];