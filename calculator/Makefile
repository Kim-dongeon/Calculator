.PHONY: clean

mycalculator: mycalculator.o ../lib/libfuncs.a 
	gcc -g -o mycalculator myCalculator.o -L../lib -lfuncs

mycalculator.o:myCalculator.c
	gcc -g -c myCalculator.c -I../include
clean:
	rm mycalculator
