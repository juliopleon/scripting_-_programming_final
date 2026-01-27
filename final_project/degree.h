#ifndef DEGREE_H
#define DEGREE_H

#include <string>

enum DegreeProgram
{
    SECURITY,
    NETWORK,
    SOFTWARE
};

inline std::string DegreeProgramToString(DegreeProgram degreeProgram)
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