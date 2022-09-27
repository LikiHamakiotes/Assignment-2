/*
Author:

This file defines two macros, RMULT and IMULT which provide the real part
and imaginary part of the product of two complex numbers

For example, suppose you have complex numbers a+ib and c+id, you can 
compute the real part, a*c - b*d with RMULT(a, b, c, d) and the imaginary
part, a*d + b*c with IMULT(a, b, c, d)
*/
#include <assert.h>

int main() {
    assert(RMULT(1, 2, 3, 4) == -5);
    assert(IMULT(1, 2, 3, 4) == 10);
    assert(RMULT(-2, 5, 5, -9) == 35);
    assert(IMULT(-2, 5, 5, -9) == 43);

    return 0;
}
