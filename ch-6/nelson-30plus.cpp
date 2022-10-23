#include <iostream>


using namespace std;


int isFailure(bool isFail)
{
    if (isFail)
        return EXIT_FAILURE;  // defined in cstdlib
    else
        return EXIT_SUCCESS;  // defined in cstdlib
}


void error_msg(initializer_list<string> il)
{
    for (auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " " ;
    cout << endl;
}

int fixexc6ex27(initializer_list<int> il){
    int sum = 0;
    for(auto item = il.begin(); item != il.end(); ++ item)
        sum += *item;
    return sum;
}


const string &shorterString(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}



void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 
void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}
 
