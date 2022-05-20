//
// Created by XaveF on 5/18/2022.
//

#include "Person.h"
#include <cstring>            // to use C-string functions
#include <sstream>
using std::stringstream;      // to use stringstream

Person::Person(const char* nm, const char* num, const int& lev)
{
    _name = new char[strlen(nm) + 1];   // we create a space before assign any value here
    strcpy(_name, nm);           // now we can copy value to _name after it has a space
    strcpy(_number, num);       // copy directly cause we allocated fixed size to it already
    _level = lev;
}

string Person::GetNm() const
{
    return string(_name);                 // return name as a string
}

string Person::GetNum() const
{
    return string(_number);
}

int Person::GetLev() const
{
    return _level;
}

string Person::ToString() const
{
    stringstream ts;
    ts << "Name: " << string(_name) << ", Number: " << string(_number) << ", Level: " << _level;
    return ts.str();               // return as string
}

string Person::ToJson() const
{
    stringstream tj;
    tj << "\"Name\":\"" << _name << "\". \"Number\": " << _number << ", \"Level\": " << _level;
    return tj.str();               // return as string
}

istream& Person::Read(istream& input)
{
    return input;
}

ostream& Person::Write(ostream& output) const
{
    return output;
}
bool Person::Equal(const Person &person) const
{
    if(person._name == _name)
    {
        return true;
    } else
    {
        return false;
    }
}


