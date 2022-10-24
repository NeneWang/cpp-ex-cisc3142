#include <iostream>

using namespace std;

int main()
{
    int item1, item2;
    while (true)
    {
        try
        {
            2/0;
        }
        catch (runtime_error err)
        {
            cout << "AN ERROR HAPPENDED";
            break;
        }
    }
}