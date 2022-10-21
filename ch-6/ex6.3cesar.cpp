#include "ex6.3cesar.hpp"
#include<iostream>

// Calculates factorial using recursive method
int fact(int num) {
    std::cout << "fact() called" << std::endl;
    if (num < 2)
        return num;
    return num * fact(num - 1);
}