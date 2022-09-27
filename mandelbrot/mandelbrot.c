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

int inMandelbrotSet(double a, double b) {}
