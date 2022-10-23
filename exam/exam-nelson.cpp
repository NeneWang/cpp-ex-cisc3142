#include <iostream>
#include <vector>

using namespace std;


vector<int> p4(int initVal){
    vector<int> myVect(10, initVal);
    

    for(auto it = begin(myVect); it != end(myVect); ++it){
        *it = *it*2;
    }

    return myVect;
}




