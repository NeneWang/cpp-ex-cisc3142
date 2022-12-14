#include "acutest.hpp"
#include "ex21.cpp"
#include "ex6.27n.cpp"

#include "nelson-30plus.cpp"

#include "book-examples.cpp"

// Test this from the root make

void maintester(void)
{

}

void test_recursivePrint(void){
    
    vector<int> v0(10, 4);

    recursivePrint(v0);
}

void test_incrementor(void)
{

    int n = 3;
    while (n > 0)
    {
        cout << " x=" << incrementor();
        n--;
    }
}
void test_c6s7p55(void)
{
    vector<int (*)(int, int)> vectorOfFunctions = c6s7p55();
    int a = 4, b = 2;

    int results[4] = {6, 8, 2, 2};
    int resultN = 0;

    cout << endl
         << "Testing vector of functions:" << endl;
    for (auto it = begin(vectorOfFunctions); it != end(vectorOfFunctions); ++it, resultN++)
    {

        // cout << (*it)(a, b) << " "<< results[resultN] << endl;
        TEST_ASSERT_((*it)(a, b) == results[resultN], "Testing function...");
        // resultN++;
    }
}

void testVectorAdding(void)
{

    c6s7p54(); // Should print 6 + 12
}

void testOverloadReturn(void)
{
    int a = 1, b = 2;
    // add(a, b);
    TEST_CHECK_(add(a, b) == 3, "Returns a proper int");

    double da = 1, db = 2.2;
    TEST_CHECK_(add(da, db) == 3.2, "Returns a proper double");
}

void testReturnShortestString(void)
{
    string shortString = "a";
    string longString = "abcd";
}

void test_fixexc6ex27(void)
{
    initializer_list<int> numbers = {1, 2, 3, 4, 5};

    // cout << fixexc6ex27(numbers) << endl;
    TEST_CHECK_(fixexc6ex27(numbers) == 15, "initializer_list");
}

void testerror_msg(void)
{
    initializer_list<string> errorMessages = {"Hello", "Error Message"};
    error_msg(errorMessages);
}

void test21(void)
{

    int val1 = 21;
    int val2 = 40;
    int *val2p = &val2;
    TEST_CHECK_(getLarger(val1, val2p) == (*val2p), "add");

    val1 += 30;

    TEST_CHECK_(getLarger(val1, val2p) == (val1), "add");
}

void c6ex27a(void)
{

    int result = 20;
    // int list[4] = {1, 2, 3, 4}; //Sums into 3+7 = 10
    vector<int> myVect(10, 2);
    TEST_CHECK_(initializer_list_n(myVect) == (result), "Should be 10");
}

void c6ex27b(void)
{

    int result = 20;
    // int list[4] = {1, 2, 3, 4}; //Sums into 3+7 = 10
    vector<int> myVect(10, 2);
    TEST_CHECK_(initializer_list_n(myVect) == (result), "Should be 5");
    // cout << initializer_list_n(list2) << endl;
}

void shortstringa(void)
{
    string sm = "a";
    string lg = "abc";
    TEST_CHECK_(shorterString(sm, lg) == sm, "Shortest should be a");
}

void shortstringinverse(void)
{
    string sm = "a";
    string lg = "abc";
    TEST_CHECK_(shorterString(lg, sm) == sm, "Shortest should be a");
}

void shortstringChangeValues(void)
{
    string sm = "a";
    string lg = "abc";
    TEST_CHECK_(shorterString(lg, sm) == sm, "Shortest should be a");
    string smprima = shorterString(lg, sm);
    smprima = "test";
    cout << endl
         << smprima << endl;
    cout << sm << endl;
}

void checkisFailure(void)
{
    bool isFail = true;

    TEST_CHECK_(isFailure(true) == EXIT_FAILURE, "Shortest be EXIT Failure");
}

TEST_LIST = {
    {"maintester", maintester},
    // {"test_recursivePrint", test_recursivePrint},
    {"test_c6s7p55", test_c6s7p55},
    // {"testVectorAdding", testVectorAdding},
    // {"testOverloadReturn", testOverloadReturn},
    // {"test_fixexc6ex27", test_fixexc6ex27},
    // {"Test Ex.21", test21},
    // {"Testing c6ex27a", c6ex27a},
    // {"Testing c6ex27b", c6ex27b},
    // {"shortstringa", shortstringa},
    // {"shortstringinverse", shortstringinverse},
    // {"testerror_msg", testerror_msg},
    // {"shortstringChangeValues", shortstringChangeValues},
    {0}};