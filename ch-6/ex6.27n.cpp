#include <iostream>

#include<vector>

using namespace std;
int initializer_list_n(vector<int> myvect){
    
    int sum = 0;
    for(auto it = myvect.begin(); it != myvect.end(); ++it){
        sum += *it;
    }

    return sum;

}