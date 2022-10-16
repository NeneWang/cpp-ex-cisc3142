#include <iostream>

using namespace std;

void test(){
    // var is a static variable
    static int var = 0;
    ++var;

    cout << var << endl;
}

int main()
{
    
    test();
    test();
    test();
    test();
    return 0;
}

