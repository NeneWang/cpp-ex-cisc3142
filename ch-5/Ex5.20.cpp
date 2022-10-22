#include <iostream>
                      //program desgned to read input in a looop and
                      //only terminate when the same string is entered twice
using namespace std;

  main(){
    string str0;
    string str1="garbage";
    cout<<"enter strings ";
    while(cin>> str0){
      cout<<"enter strings ";
      if(str1==str0){break;}
      str1 = str0;
    }
    cout<<"loop terminated "<< str1 <<" was entered twice";
  }
