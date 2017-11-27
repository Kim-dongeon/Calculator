.PHONY: clean

libfuncs.a: defaultCal.o modeFunc.o
	ar rv libfuncs.a defaultCal.o modeFunc.o

defaultCal.o: defaultCal.c
	gcc -c -g defaultCal.c -o defaultCal.o
modeFunc.o: modeFunc.c
	gcc -c -g modeFunc.c -o modeFunc.o

clean:
	rm defaultCal.o modeFunc.o
