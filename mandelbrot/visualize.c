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
#include <assert.h>
#include <stdio.h> /* printf */

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
      
      /* the real parts combining with the imaginary parts */

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

/* absolute values being greater than 2 */

int main() {
  for(int m = -16; m < 16; m++) {
    printf("\n");
    for(int n = -64; n < 16; n++) {
      double x = 0.03125*n;
      double y = 0.0625*m;

/* points that it needs to plot and their range */

      if(inMandelbrotSet(x,y)) {
        printf("%c", '*');
      }
      else {
        printf("%c", ' ');
      }
    }
  }
  return 0;
}
 /* printing '*' if it is in the mandelbrot set and ' ' if it is not */
