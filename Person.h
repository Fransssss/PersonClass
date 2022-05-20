//
// Created by XaveF on 5/18/2022.
//

#ifndef PERSONCLASS_PERSON_H
#define PERSONCLASS_PERSON_H

#include "iostream"
using std::string;
using std::istream;                 // later deal with Read from file
using std::ostream;                 // later deal with Write into file

class Person
{
private:
    char* _name;                     // we don't know name's length so we make it a pointer to object type char for now
    char _number[11];                // contains phone number - U.S. has 10 digits the 11th for nullptr
    int _level;                      // indication how close someone is
public:
    Person(const char* nm, const char* num, const int& lev);
    string GetNm() const;
    string GetNum() const;
    int GetLev() const;
    string ToString() const;
    string ToJson() const;
    istream& Read(istream& input);                    // later read from file
    ostream& Write(ostream& output) const;                  // later write into file
    bool Equal(const Person& person) const;           // later to compare if two people's name are the smae
};


#endif //PERSONCLASS_PERSON_H
