#ifndef DEGREE_H
#define DEGREE_H

#include <string>

enum DegreeProgram
{
    SECURITY,
    NETWORK,
    SOFTWARE
};

std::string DegreeProgramToString(DegreeProgram degreeProgram) // FIX ME - Duplicate issue copying this function more than once!! .h is for declaration not initialize so duplicate unless inline
{
    if (degreeProgram == SECURITY)
    {
        return "Security";
    }
    else if (degreeProgram == NETWORK)
    {
        return "Network";
    }
    else if (degreeProgram == SOFTWARE)
    {
        return "Software";
    }
    else
    {
        return "Not a valid value";
    }
}

#endif