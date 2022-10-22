#include "acutest.hpp"
#include "ex21.cpp"
#include "ex6.27n.cpp"

void test21(void){

    int val1= 21;
    int val2= 40;
    int *val2p = &val2;
    TEST_CHECK_(getLarger(val1, val2p) == (*val2p), "add");

    val1+=30;


    
    TEST_CHECK_(getLarger(val1, val2p) == (val1), "add");
}

void c6ex27(void){

    int result = 10;
    int list[4] = {1, 2, 3, 4}; //Sums into 3+7 = 10
    TEST_CHECK_(initializer_list_n() == (result), "Should be 10");

}


TEST_LIST = {
    {"Test Ex.21", test21},
    {"Testing c6ex27", c6ex27},
    {0}
};