#include "acutest.hpp"
#include "exam-nelson.cpp"
#include "utils.cpp"

#include <iostream>
#include <vector>
using namespace std;




void test_p4(void){
    vector<int> res = p4(2); //Should return 2
    TEST_ASSERT_(res.at(0) == 4, "Checking value");
    loop_vect(res);

    
}





TEST_LIST = {
    {"test_p4", test_p4},
    {0}};