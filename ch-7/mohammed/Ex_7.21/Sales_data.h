#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

class Sales_data
{
    // A class can allow another class or function
    // to access its nonpublic members by making that class or function a friend.
    // Friend declarations may appear only inside a class definition; they may appear anywhere in the class.
    // Friends are not members of the class and are not affected by the access control of the section in which they are declared.
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::istream &read(std::istream&, Sales_data&);
    friend std::ostream &print(std::ostream&, const Sales_data&);

    public:
        Sales_data() = default;
        Sales_data(const std::string &s, unsigned n, double p):
            bookNo(s), units_sold(n), revenue(p*n) {}
        Sales_data(const std::string &s): bookNo(s) {}
        Sales_data(std::istream&);
        std::string isbn() const { return bookNo; }
        Sales_data &combine(const Sales_data&);
    private:
        double avg_price() const
        {
            return units_sold ? revenue / units_sold : 0;
        }
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};


/*
Declarations for nonmember parts of the Sales_data interface:

A friend declaration only specifies access.
It is not a general declaration of the function. If we want users of the class to be able to call a friend function,
then we must also declare the function separately from the friend declaration.

Note: Many compilers do not enforce the rule that friend functions
    must be declared outside the class before they can be used.
*/
Sales_data add(const Sales_data&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);

// Constructor
Sales_data::Sales_data(std::istream &is)
{
    read(is, *this); // this will read a transaction from is to `this`
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this; // return the object in which the function was called
}

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs; // temporary copy
    sum.combine(rhs);
    return sum;
}



#endif