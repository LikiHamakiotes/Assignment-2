visualize.out: visualize.c mandelbrot.o
	gcc visualize.c mandelbrot.o -o visualize.out

mandelbrot.o: mandelbrot.c
	gcc mandelbrot.c -c

test: testMandelbrot.c mandelbrot.o
	gcc testMandelbrot.c mandelbrot.o -o testMandelbrot.out
	./testMandelbrot.out

clean:
	rm -f mandelbrot.o
	rm -f visualize.out

.PHONY: clean test
