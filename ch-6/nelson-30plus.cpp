#include <iostream>
#include <stdio.h>
#include <vector>

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

int returnSum(int x, int y)
{
    return x + y;
}

int usingPointerFunction()
{
    void (*foo)(int);
    foo = &my_int_func;

    int (*returnSumVar)(int, int);
    returnSumVar = &returnSum;

    /* call my_int_func (note that you do not need to write (*foo)(2) ) */
    foo(2);
    foo(201);
    /* but if you want to, you may */
    (*foo)(1);

    cout << returnSumVar(2, 30);

    return 0;
}

void c6s7p54()
{

    vector<int (*)(int, int)> vectorOfFunctions;
    vectorOfFunctions.push_back(returnSum);
    int result = (*vectorOfFunctions.at(0))(6, 12); // Should return 18
    cout << result << endl;
}

int returnMult(int x, int y)
{
    return x * y;
}


int returnSub(int x, int y)
{
    return x - y;
}


int returnDiv(int x, int y)
{
    return x / y;
}

vector<int (*)(int, int)> c6s7p55()
{
    vector<int (*)(int, int)> vectorOfFunctions;
    vectorOfFunctions.push_back(returnSum);
    vectorOfFunctions.push_back(returnMult);
    vectorOfFunctions.push_back(returnSub);
    vectorOfFunctions.push_back(returnDiv);
    return vectorOfFunctions;
}



int incrementor(){
  static int x= 0;
  x++;
  return (x-1);
}