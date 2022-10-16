#include "acutest.hpp"
#include "util.hpp"

void test_add(void){
    TEST_CHECK_(add(2, 2) == (2+2), "add(%d, %d)==%d", 2, 2, (2+2));
}

TEST_LIST = {
    {"int add(int, int);", test_add},
    {0} /* Must be terminated with {0}*/
};


