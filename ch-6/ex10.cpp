#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 1, b=2;
    swap(&a, &b);

    cout << "a is: " << a << endl;
    
}