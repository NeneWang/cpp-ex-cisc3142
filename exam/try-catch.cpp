#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int item1, item2;
    cout << "Please enter some values" << endl;
    while (cin >> item1 >> item2)
    {
        try
        {
            printf("Dividing %d and %d", item1, item2);
            cout << item1/item2 << endl;
        }
        catch (runtime_error& e)
        {
            cout << "Exception occurred" << endl << e.what();
            break;
        }
    }
}