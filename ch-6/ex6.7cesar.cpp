#include<iostream>
#include "allFunctions.hpp"

using namespace std;

int count_calls() {
    static int staticNum = 0;
    return staticNum++;
}

void prompt_count_calls() {
    cout << "How many times do you want to run the function? > ";
    int times = 0;
    cin >> times;
    
    while(times > 0) {
        cout << "times = " << count_calls() << ", ";
        times--;
    }
    cout << endl;
}