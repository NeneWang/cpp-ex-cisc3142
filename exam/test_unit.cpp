#include "acutest.hpp"
#include "exam-nelson.cpp"
#include "utils.cpp"

#include <iostream>
#include <vector>
using namespace std;

void test_sizeof(void){
    int x[15]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;
}

void constantExpression(void){
    constexpr int *np = nullptr;
    int j = 0;
    constexpr int i = 42;
    cout << i << endl;
    cout << j << endl;
    cout << np << endl;

    // i =2; // This doesn't work because you cant reassign i
}

void typeDefSample(void){
    typedef double decimales;
    decimales a = 2;
    cout << a/3 << endl;
}


void pointConstType(void){
    typedef char *pstring;
    const pstring cstr = "Avenida Rivadavia";

    cout << cstr<< endl;
    // cstr = "sad"; // ILLEGAL, this reference cannot be changed
    const pstring *ps;
    // const char *cstr = 0; //Thorws an error because cstr had already been defined
    const char *cstr1 = 0;

}


void test_p4(void){
    vector<int> res = p4(2); //Should return 2
    TEST_ASSERT_(res.at(0) == 4, "Checking value");
    loop_vect(res);

}





TEST_LIST = {
    {"pointConstType", pointConstType},
    {"typeDefSample", typeDefSample},
    {"constantExpression", constantExpression},
    {"test_p4", test_p4},
    {"test_sizeof", test_sizeof},
    {0}};