#include "acutest.hpp"
#include "ex21.cpp"

void test21(void){

    int val1= 21;
    int val2= 40;
    int *val2p = &val2;
    TEST_CHECK_(getLarger(val1, val2p) == (*val2p), "add");

    val1+=30;
    TEST_CHECK_(getLarger(val1, val2p) == (val1), "add");
}


TEST_LIST = {
    {"Test Ex.21", test21},
    {0}
};