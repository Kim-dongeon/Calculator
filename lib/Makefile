.PHONY: clean

libfuncs.a: defaultCal.o modeFunc.o manual.o
	ar rv libfuncs.a defaultCal.o modeFunc.o manual.o

defaultCal.o: defaultCal.c
	gcc -c -g defaultCal.c -o defaultCal.o
modeFunc.o: modeFunc.c
	gcc -c -g modeFunc.c -o modeFunc.o
manual.o: manual.c
	gcc -c -g manual.c -o manual.o

clean:
	rm defaultCal.o modeFunc.o
