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

#endif