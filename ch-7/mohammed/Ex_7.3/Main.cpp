#include <iostream>
#include "Sales_data.h"

using namespace std;

int main()
{
    cout << "Enter ISBN, Units Sold, and Total Revenue:" << endl;

    Sales_data total;
    // I made a slight error, I should have been reading `price` instead of `total.revenue`
    // and then calculating the `total.revenue` using `price * total.units_sold`
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
    
    return 0;
}