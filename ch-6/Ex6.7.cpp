#include <iostream>

using namespace std;

int incrementor(){
  static int x= 0;
  x++;
  return (x-1);
}


int main(){
  int n;
  cout<< "enter number of times to call incrementor \n";
  cin>>n;

while (n>0){
  cout<<" x="<<incrementor();
  n--;}

}
