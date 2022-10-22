#include "acutest.hpp"
#include "ex21.cpp"
#include "ex6.27n.cpp"

#include "book-examples.cpp"


// Test this from the root make

void test21(void){

    int val1= 21;
    int val2= 40;
    int *val2p = &val2;
    TEST_CHECK_(getLarger(val1, val2p) == (*val2p), "add");

    val1+=30;


    
    TEST_CHECK_(getLarger(val1, val2p) == (val1), "add");
}

void c6ex27a(void){

    int result = 20;
    // int list[4] = {1, 2, 3, 4}; //Sums into 3+7 = 10
    vector<int> myVect(10, 2);
    TEST_CHECK_(initializer_list_n(myVect) == (result), "Should be 10");

}

void c6ex27b(void){

    int result = 20;
    // int list[4] = {1, 2, 3, 4}; //Sums into 3+7 = 10
    vector<int> myVect(10, 2);
    TEST_CHECK_(initializer_list_n(myVect) == (result), "Should be 5");
    // cout << initializer_list_n(list2) << endl;

}

void shortstringa(void){
    string sm = "a";
    string lg = "abc";
    TEST_CHECK_(shorterString(sm, lg) == sm, "Shortest should be a");
}

void shortstringinverse(void){
    string sm = "a";
    string lg = "abc";
    TEST_CHECK_(shorterString(lg, sm) == sm, "Shortest should be a");
}


void shortstringChangeValues(void){
    string sm = "a";
    string lg = "abc";
    TEST_CHECK_(shorterString(lg, sm) == sm, "Shortest should be a");
    string smprima = shorterString(lg, sm);
    smprima = "test";
    cout << endl << smprima << endl;
    cout << sm << endl;
    TEST_CHECK_(sm == "test", "Shortest should be a");
    
}

TEST_LIST = {
    {"Test Ex.21", test21},
    {"Testing c6ex27a", c6ex27a},
    {"Testing c6ex27b", c6ex27b},
    {"shortstringa", shortstringa},
    {"shortstringinverse", shortstringinverse},
    {"shortstringChangeValues", shortstringChangeValues},
    {0}
};