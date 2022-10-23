#include "acutest.hpp"
#include "ex21.cpp"
#include "ex6.27n.cpp"

#include "nelson-30plus.cpp"

#include "book-examples.cpp"


// Test this from the root make

void maintester(void){
    cout << shorterString("as", "b");
}

void test_fixexc6ex27(void){
    initializer_list<int> numbers = {1, 2, 3, 4, 5};

    // cout << fixexc6ex27(numbers) << endl;
    TEST_CHECK_(fixexc6ex27(numbers) == 15, "initializer_list");
}



void testerror_msg(void){
    initializer_list<string> errorMessages = {"Hello", "Error Message"};
    error_msg(errorMessages);

}


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
    
}

void checkisFailure(void){
    bool isFail = true;
    
    TEST_CHECK_(isFailure(true) == EXIT_FAILURE, "Shortest be EXIT Failure");

}



TEST_LIST = {
    {"maintester", maintester},
    {"test_fixexc6ex27", test_fixexc6ex27},
    {"Test Ex.21", test21},
    {"Testing c6ex27a", c6ex27a},
    {"Testing c6ex27b", c6ex27b},
    {"shortstringa", shortstringa},
    {"shortstringinverse", shortstringinverse},
    {"testerror_msg", testerror_msg},
    // {"shortstringChangeValues", shortstringChangeValues},
    {0}
};