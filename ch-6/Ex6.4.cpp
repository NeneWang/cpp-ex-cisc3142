#include <iostream>

using namespace std;


int factorial(int x){

for (int i=x-1; i>0; i--){
//  cout<<x<<"\n";
 x = x*i;

}

  return x;
}



int main(){

  cout << "please enter a number "<<"\n";
int input;
cin >> input;
cout <<"the factorial of "<<input<<" is:  "<< factorial(input);

}
