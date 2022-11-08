#include <iostream>
#include "Sales_data.h"

using namespace std;

int main()
{
    cout << "Enter ISBN, Units Sold, and Price:" << endl;

    Sales_data total;
    if (read(cin, total))
    {
        Sales_data trans;

        while (read(cin, trans))
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                cout << "\nResult (ISBN | Sold Units | Revenue | Avg Price):" << endl;
                print(cout, total) << endl << endl;

                total = trans;
            }
        }
        cout << "\nResult (ISBN | Sold Units | Revenue | Avg Price):" << endl;
        print(cout, total) << endl << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }
    return 0;
}