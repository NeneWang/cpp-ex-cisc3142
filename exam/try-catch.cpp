#include <iostream>
#include <cstdio>

using namespace std;
#include <stdexcept>

class Exception : public runtime_error {
public:
    // Defining constructor of class Exception
    // that passes a string message to the runtime_error class
    Exception()
        : runtime_error("Math error: Attempted to divide by Zero\n")
    {
    }
};

int main()
{
    int item1, item2;
    cout << "Please enter some values" << endl;
    while (cin >> item1 >> item2)
    {
        try
        {
            printf("Dividing %d and %d is: ", item1, item2);
            int result = item1/item2;
            cout << result << endl;
        }
        catch (Exception& e)
        {
            cout << "Exception occurred" << endl << e.what();
            break;
        }
    }
}