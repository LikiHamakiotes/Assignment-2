test: uparrow collatz complex median pythagorean mandelbrot

uparrow:
	gcc uparrow/uparrow.c -o uparrow.out
	./uparrow.out

collatz:
	gcc collatz/collatz.c -o collatz.out
	./collatz.out

complex:
	gcc complex/complex.c -o complex.out
	./complex.out

median:
	gcc median/median.c -o median.out
	./median.out

pythagorean:
	gcc pythagorean/pythagorean.c -o pythagorean.out
	./pythagorean.out

mandelbrot:
	cd mandelbrot && make test && cd ..

clean:
	rm *.out

.PHONY: uparrow collatz complex median pythagorean mandelbrot test
