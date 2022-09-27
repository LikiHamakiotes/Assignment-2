#include <assert.h>
#include "mandelbrot.h"

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
