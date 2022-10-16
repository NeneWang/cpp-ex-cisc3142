#include <iostream>

using namespace std;


int fact(int num){
    // Returns the factorial of the input
    int factRes = 1;
    for (int i=2; i<=num ; i++){
        factRes *=i;
    }
    return factRes;
}

int main(){
    cout << "Testing Factorial with 4" <<endl;
    cout << fact(4) << endl;

    cout << "Testing Factorial with 5" <<endl;
    cout << fact(5) << endl;
    return  0;
}
