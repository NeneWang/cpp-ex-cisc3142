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
};

#endif