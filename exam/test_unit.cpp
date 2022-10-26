#include "acutest.hpp"
#include "exam-nelson.cpp"
#include "utils.cpp"

#include <iostream>
#include <vector>
using namespace std;

void test_sizeof(void)
{
    int x[15];
    int *p = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
}

void constantExpression(void)
{
    constexpr int *np = nullptr;
    int j = 0;
    constexpr int i = 42;
    cout << i << endl;
    cout << j << endl;
    cout << np << endl;

    // i =2; // This doesn't work because you cant reassign i
}

void typeDefSample(void)
{
    typedef double decimales;
    decimales a = 2;
    cout << a / 3 << endl;
}

void pointConstType(void)
{
    typedef char *pstring;
    const pstring cstr = "Avenida Rivadavia";

    cout << cstr << endl;
    // cstr = "sad"; // ILLEGAL, this reference cannot be changed
    const pstring *ps;
    // const char *cstr = 0; //Thorws an error because cstr had already been defined
    const char *cstr1 = 0;

    // const int r1 = 2;
    // const int &const r2 = r1; // error: 'const' qualifiers cannot be applied to 'const int&'

    cout <<  "Character cstr1 "  << cstr1 << endl;
}

double returnInt()
{
    return 2;
}

void array2D()
{
    int ia[3][4] = {
        {0, 1, 2, 3},  // initializers for the row indexed by 0
        {4, 5, 6, 7},  // initializers for the row indexed by 1
        {8, 9, 10, 11} // initializers for the row indexed by 2
    };
    int ib[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    TEST_ASSERT_(ia[2][2] == ib[2][2], "Is the same?");
    TEST_ASSERT_(ia[2][1] == ib[2][1], "Is the same?");
    TEST_ASSERT_(ia[2][3] == ib[2][3], "Is the same?");
    TEST_ASSERT_(ia[1][3] == ib[1][3], "Is the same?");
    TEST_ASSERT_(ia[1][2] == ib[1][2], "Is the same?");

    int ic[3][4] = {{ 0 }, { 4 }, { 8 }};

    //Surprisingly the following items, are the continuation.
    // 

    int test1d[4] = {0};

    cout << "The followign should be 0: ?" << ia[1][2] << endl;
    cout << test1d[2];

}


void test_switch(void){
    ;
}

void conditionalOperator(void){
    int grade = 20;
    string finalgrade = (grade < 60) ? "fail" : "pass";
    TEST_CHECK_(finalgrade == "fail", "Test fail");

    grade = 200;
    finalgrade = (grade < 60) ? "fail" : "pass";
    TEST_CHECK_(finalgrade == "pass", "Test pass");
}

void declTypeSpecifier(void)
{
    // decltype(returnInt) funcInt = 1;
    // cout <<funcInt << endl;

    int ci = 0, &cj = ci;
    decltype(ci) x = 0; // x has type const int

    decltype(ci) x2 = 23;
    decltype(cj) y = x2; // y has type const int& and is bound to x
    y = 10;
    // cout << x2 <<endl;//Should print 23
    TEST_ASSERT_(x2 == 10, "Should be 10");
}

void test_p4(void)
{
    vector<int> res = p4(2); // Should return 2
    TEST_ASSERT_(res.at(0) == 4, "Checking value");
    loop_vect(res);
}

TEST_LIST = {
    {"conditionalOperator", conditionalOperator},
    {"array2D", array2D},
    {"declTypeSpecifier", declTypeSpecifier},
    {"pointConstType", pointConstType},
    {"typeDefSample", typeDefSample},
    {"constantExpression", constantExpression},
    {"test_p4", test_p4},
    {"test_sizeof", test_sizeof},
    {0}};