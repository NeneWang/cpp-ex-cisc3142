#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person
{
    // Constructors
    Person() = default;
    Person(std::string n): name(n) {}
    Person(std::string n, std::string a): name(n), address(a) {}

    // Getters
    std::string getName() const { return name; }
    std::string getAddress() const { return address; }

    std::string name;
    std::string address;
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