#include "acutest.hpp"
#include "another_func.cpp"
#include "util.hpp"

#include "string"

using namespace std;


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

void test_add(void){
    TEST_CHECK_(add(2, 2) == (2+2), "add(%d, %d)==%d", 2, 2, (2+2));
    TEST_CHECK_(add(2, 20) == (2+20), "add(%d, %d)==%d", 2, 20, (2+20));
    // TEST_CHECK_(add(2, 20) == (2+22), "add(%d, %d)==%d", 2, 20, (2+20)); // This fails
    // TEST_CHECK_(getTwo() == 1, "getTwo==%d", 1, 1);
}

void test_fail(void){
    TEST_CHECK_(add(2, 20) == (2+22), "add(%d, %d)==%d", 2, 20, (2+20)); // This fails
}

void test_get1(void){
    TEST_CHECK_(getTwo() == 2, "Test string");
}


TEST_LIST = {
    {"conditionalOperator", conditionalOperator},
    {"int add(int, int);", test_add},
    {"int add(int, int);", test_fail},
    {"Test get1;", test_get1},
    {0} /* Must be terminated with {0}*/
};


