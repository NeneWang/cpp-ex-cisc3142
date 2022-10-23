#include "acutest.hpp"
#include "exam-nelson.cpp"

#include <iostream>
#include <vector>
using namespace std;


void test_p4(void){
    vector<int> res = p4(2); //Should return 2
    TEST_ASSERT_(res.at(0) == 4, "Checking value");

    
}


void loop_vect(vector<int> vect){
    for(auto val : vect){
        cout << val;
    }
}



TEST_LIST = {
    {"test_p4", test_p4},
    {0}};