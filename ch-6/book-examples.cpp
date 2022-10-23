#include <iostream>
using namespace std;


const string &shorterString(const string &s1, const string
&s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

