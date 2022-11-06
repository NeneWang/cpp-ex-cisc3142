#include <iostream>

using namespace std;

void swap(int *num1, int *num2)
{
    int tem = *num1;
    *num1 = *num2;
    *num2 = tem;
}

int main()
{
    int a = 1, b = 3;
    cout << "a before swap: " << a << endl;
    swap(a, b);
    cout << "a after swap: " << a << endl;
}
