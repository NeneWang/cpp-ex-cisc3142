#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person
{
    std::string name;
    std::string address;

    // Yes: we should use `const` here because this way we are saying
    // that the implicit `this` which is by default `nonconst` to be `const`.
    // Objects that consts or ref/pointers to const objects can only call const member functions
    std::string getName() const { return name; }
    std::string getAddress() const { return address; }
};


std::istream &read(std::istream&,  Person&);
std::ostream &print(std::ostream&, const Person&);


std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.getName() + " " << person.getAddress();
    return os;
}

#endif