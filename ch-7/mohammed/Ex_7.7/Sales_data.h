/*
 * Mohammed Hossain
 * Page 77 and 257
 */
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data
{
    // data members are unchaged from Unit 2.6.1
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    // new members:operations on Sales_data objects
    // the keyword const in bewteen `isbn() and {}` modifies the implicit `this` pointer.

    std::string isbn() const { return this->bookNo; }
    Sales_data& combine(const Sales_data&); // not defined yet
    double avg_price() const; // not defined yet
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

// members of a class can be defined outside of that class
double Sales_data::avg_price() const
{
    if (units_sold) // i.e. if units_sold > 0
    {
        return revenue/units_sold;
    }
    else return 0;
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