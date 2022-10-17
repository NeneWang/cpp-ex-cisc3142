#include "acutest.hpp"
#include "another_func.cpp"
#include "util.hpp"

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
    {"int add(int, int);", test_add},
    {"int add(int, int);", test_fail},
    {"Test get1;", test_get1},
    {0} /* Must be terminated with {0}*/
};


