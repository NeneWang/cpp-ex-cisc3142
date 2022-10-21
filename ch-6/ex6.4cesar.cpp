#include<iostream>
#include "ex6.3cesar.cpp"
#include "allFunctions.hpp"

using namespace std;

// Asks the user for an integer value, calls fact() function from ex6.3cesar.cpp and
// retunrs the factorial value.
void promptFacMessage() {
    cout << "Insert an integer to calculate its factorial" << endl;
    cout << "ex: 5! = 5 * 4 * 3 * 2 * 1 = 120" << endl;

    int num = 0;
    cin >> num;

    int factorial = fact(num);
    cout << "The factorial of " << num << " is " << factorial << endl; 
}