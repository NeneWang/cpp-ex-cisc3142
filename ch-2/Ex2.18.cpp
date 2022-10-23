//#pointerPracice
//prgram to demonstrate methods to change either the pointer or value of
//object that pointer points to.
#include <iostream>

using namespace std;

int main (){
int a =100;
int *ptr = &a;
cout<< *ptr <<"  "<< ptr<< endl;

// to change value of pointer: (new address)
int b=100;
ptr = &b;
cout << *ptr<<"  "<< ptr<< endl;

// to change the value to which poiter points:
*ptr = 50;
cout << *ptr<<"  "<< ptr<< endl;
}
