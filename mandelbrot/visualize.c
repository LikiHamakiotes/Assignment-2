/*
Author:

This file prints a low resolution representation of the Mandelbrot Set to
screen.  For a description of the Mandelbrot set, see `mandelbrot.c`.

It plots the points:
0.03125*m + i0.0625*n
for m from -64 to 16 and n -16 to 16

If the point is in the Mandelbrot set, a '*' is printed, otherwise a ' ' is
printed.  The points are printed one row at a time, meaning poinst of constant
y value are printed on the same line, and the next line has the next highest
y value.
*/

/*
Instructor Hints (You may delete this when submitting)
It should look something like this:
                                                                *

                                                            *
                                                         ******
                                                         *******
                                                          *****
                                                    *************** *
                                               ***********************  ***
                                                ***************************
                                            * ****************************
                                            *******************************
                                           **********************************
                           ** ****        ***********************************
                           ***********   ************************************
                         *************** ***********************************
                     **  *************** **********************************
*************************************************************************
                     **  *************** **********************************
                         *************** ***********************************
                           ***********   ************************************
                           ** ****        ***********************************
                                           **********************************
                                            *******************************
                                            * ****************************
                                                ***************************
                                               ***********************  ***
                                                    *************** *
                                                          *****
                                                         *******
                                                         ******
                                                            *

                                                                *
*/
#include <stdio.h> /* printf */
#include "mandelbrot.h" /* InMandelbrotSet */

int main() {}
