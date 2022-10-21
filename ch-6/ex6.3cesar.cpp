#include "ex6.3cesar.hpp"

// Calculates factorial using recursive method
int fact(int num) {
    if (num < 2)
        return num;
    return num * fact(num - 1);
}