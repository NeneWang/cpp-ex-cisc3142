#include <iostream>

using namespace std;

int incrementor(){
  static int x= 0;
  x++;
  return (x-1);
  // Devlin, you can also do:
  //                          return x++;
  // That way, you are returning the value first, and after that you are adding one.
}


int main(){
  int n;
  cout<< "enter number of times to call incrementor \n";
  cin>>n;

while (n>0){
  cout<<" x="<<incrementor();
  n--;}

}
