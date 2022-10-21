#include <iostream>
#include <algorithm>

using namespace std;

int getLarger(int val, int *pointer){
    return  max(val, *pointer);
}
