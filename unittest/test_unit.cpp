#include "acutest.hpp"
#include "util.hpp"
#include "another_func.hpp"

void test_add(void){
    TEST_CHECK_(add(2, 2) == (2+2), "add(%d, %d)==%d", 2, 2, (2+2));
    TEST_CHECK_(add(2, 20) == (2+20), "add(%d, %d)==%d", 2, 20, (2+20));
    // TEST_CHECK_(add(2, 20) == (2+22), "add(%d, %d)==%d", 2, 20, (2+20)); // This fails
    // TEST_CHECK_(print1() == 1, "print1==%d", 1, 1);
}

void test_fail(void){
    TEST_CHECK_(add(2, 20) == (2+22), "add(%d, %d)==%d", 2, 20, (2+20)); // This fails
}


TEST_LIST = {
    {"int add(int, int);", test_add},
    {"int add(int, int);", test_fail},
    {0} /* Must be terminated with {0}*/
};


