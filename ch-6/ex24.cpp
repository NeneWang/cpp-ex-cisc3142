#include <iostream>

using namespace std;

void printI(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}

int main(){

    const int arr[4] = {1,2,32,13};
    printI(arr);
}




