#include <iostream>
#include <vector>
using namespace std;



void recursivePrint(vector<int> &v0){

int i = (v0.size())-1;
  if (i>0){
    cout<< v0[i]<<" ";
    v0.pop_back();
    recursivePrint(v0);
  }


}

int main (){
vector <int> v0(10, 4);

recursivePrint(v0);
}
