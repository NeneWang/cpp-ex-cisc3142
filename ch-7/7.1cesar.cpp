#include <iostream>
#include <string>
#include <fstream>
#include "Sales.h"
#include <vector>

using namespace std;

int main()
{
    ofstream file;
    vector<Sales> sales_vec;
    Sales d0;

    while(cin >> d0.bookID >> d0.units_sold >> d0.price)
    {
        sales_vec.push_back(d0);
    }

    cout << sales_vec[0].price;
/*
    cin >> d0.bookID >> d0.units_sold >> d0.price;
    cin >> d1.bookID >> d1.units_sold >> d1.price;
    cin >> d2.bookID >> d2.units_sold >> d2.price;
    cin >> d3.bookID >> d3.units_sold >> d3.price;
*/
    file.open("output.txt");
    file << sales_vec[0].price;
    file.close();

}