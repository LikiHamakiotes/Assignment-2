/*
Author:

This file provides a function called inMandelbrotSet which takes two doubles
which together represent a single complex number.  The function returns 1 if
the number is in the Mandelbrot set and 0 otherwise

A complex number, c is in the Mandelbrot set if the sequence:
X(0) = 0
X(n+1) = X(n)*X(n) + c
is unbounded (meaning tends toward infinity)

A complex number, a + ib times another complex number, c + id is equal to
ac + ibc + iad - bd, so (a + ib) * (a + ib) is aa + 2iab - bb = aa - bb + 2iab

We can't always know for sure if its going to infinity, but we do know that
if the real or imaginary part ever have absolute value greater than 2, it will go to infinity,
so if that is ever the case, we return 0.  Otherwise, if we do 100 iterations
and have not yet returned, we return 1.
*/

#include <assert.h>

int inMandelbrotSet (double a, double b) {
    double real = 0;
    double imaginary = 0;

    for(int x = 0; x < 100; x++) {
      double a_ = real*real - imaginary*imaginary;
      double b_ = 2*real*imaginary;

      a_ = a_ + a;
      b_ = b_ + b;

      real = a_;
      imaginary = b_;

      if(real < 0) {
        if(real*(-1) > 2) {
          return 0;
        }
      }
      else {
        if(real < 0) {
          return 0;
      
        }
      }

      if(imaginary < 0){
        if(imaginary*(-1) > 2){
          return 0;
        }
      }
    }
    return 1;
  }

int main() {
    assert(inMandelbrotSet(-0.90625, 1) == 0);
    assert(inMandelbrotSet(-0.875, 0.9375) == 0);
    assert(inMandelbrotSet(-0.84375, 0.875) == 0);
    assert(inMandelbrotSet(-0.8125, 0.8125) == 0);
    assert(inMandelbrotSet(-0.78125, 0.75) == 0);
    assert(inMandelbrotSet(-0.75, 0.6875) == 0);
    assert(inMandelbrotSet(-0.71875, 0.625) == 0);
    assert(inMandelbrotSet(-0.6875, 0.5625) == 0);
    assert(inMandelbrotSet(-0.65625, 0.5) == 0);
    assert(inMandelbrotSet(-0.625, 0.4375) == 1);
    assert(inMandelbrotSet(-0.59375, 0.375) == 1);
    assert(inMandelbrotSet(-0.5625, 0.3125) == 1);
    assert(inMandelbrotSet(-0.53125, 0.25) == 1);
    assert(inMandelbrotSet(-0.5, 0.1875) == 1);
    assert(inMandelbrotSet(-0.46875, 0.125) == 1);
    assert(inMandelbrotSet(-0.4375, 0.0625) == 1);
    assert(inMandelbrotSet(-0.40625, 0) == 1);
    assert(inMandelbrotSet(-0.375, -0.0625) == 1);
    assert(inMandelbrotSet(-0.34375, -0.125) == 1);
    assert(inMandelbrotSet(-0.3125, -0.1875) == 1);
    assert(inMandelbrotSet(-0.28125, -0.25) == 1);
    assert(inMandelbrotSet(-0.25, -0.3125) == 1);
    assert(inMandelbrotSet(-0.21875, -0.375) == 1);
    assert(inMandelbrotSet(-0.1875, -0.4375) == 1);
    assert(inMandelbrotSet(-0.15625, -0.5) == 1);
    assert(inMandelbrotSet(-0.125, -0.5625) == 1);
    assert(inMandelbrotSet(-0.09375, -0.625) == 1);
    assert(inMandelbrotSet(-0.0625, -0.6875) == 1);
    assert(inMandelbrotSet(-0.03125, -0.75) == 1);
    assert(inMandelbrotSet(0, -0.8125) == 0);
    assert(inMandelbrotSet(0.03125, -0.875) == 0);
    assert(inMandelbrotSet(0.0625, -0.9375) == 0);
    assert(inMandelbrotSet(0.09375, -1) == 0);

    return 0;
} 
