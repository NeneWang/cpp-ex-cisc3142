#include <iostream>
#include <stdio.h>

using namespace std;

int isFailure(bool isFail)
{
    if (isFail)
        return EXIT_FAILURE; // defined in cstdlib
    else
        return EXIT_SUCCESS; // defined in cstdlib
}

void error_msg(initializer_list<string> il)
{
    for (auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

int fixexc6ex27(initializer_list<int> il)
{
    int sum = 0;
    for (auto item = il.begin(); item != il.end(); ++item)
        sum += *item;
    return sum;
}

int add(int a, int b)
{
    //   cout << "sum = " << (a + b);
    return a + b;
}

double add(double a, double b)
{
    // cout << endl << "sum = " << (a + b);
    return a + b;
}

void my_int_func(int x)
{
    printf("%d\n", x);
}

int usingPointerFunction()
{
    void (*foo)(int);
    foo = &my_int_func;

    /* call my_int_func (note that you do not need to write (*foo)(2) ) */
    foo(2);
    /* but if you want to, you may */
    (*foo)(2);
    (*foo)(4);
    (*foo)(5);
    (*foo)(1);

    return 0;
}
