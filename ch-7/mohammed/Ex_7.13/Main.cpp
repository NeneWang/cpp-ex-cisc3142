#include <iostream>
#include "Sales_data.h"

using namespace std;

int main()
{
    cout << "Enter ISBN, Units Sold, and Price (Ctrl+D to Stop):" << endl;

    Sales_data total(cin);
    if (!cin.eof())
    {
        Sales_data trans(cin);

        while (!cin.eof())
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
        return -1;
    }
    return 0;
}