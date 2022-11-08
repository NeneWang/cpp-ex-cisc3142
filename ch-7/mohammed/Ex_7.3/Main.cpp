#include <iostream>
#include "Sales_data.h"

using namespace std;

int main()
{
    cout << "Enter ISBN, Units Sold, and Total Revenue:" << endl;

    Sales_data total;
    while(cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;

        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                std::cout << "\nAverage Price: $" << to_string(total.avg_price()) << endl << endl;
                total = trans;
                cout << "Enter ISBN, Units Sold, and Total Revenue (Ctrl+C to quit):" << endl;
            }
        }
    }
    

    // Sales_data total;
    // if (std::cin >> NULL)
    // {
    //     Sales_data trans;

    //     while (std::cin >> trans)
    //     {
    //         if (sales.isbn() == trans.isbn())
    //         {
    //             total += trans;
    //         }
    //         else
    //         {
    //             std::cout << total << std::endl;
    //             total = trans;
    //         }
    //     }
    //     std::cout << total << std::endl;
    // }
    // else
    // {
    //     std::cerr << "No data!?" << std::endl;
    //     return -1;
    // }
    // return 0;
}