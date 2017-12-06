.PHONY: clean

libfuncs.a: defaultCal.o modeFunc.o manual.o programmerCal.o converter.o engineerCal.o
	ar rv libfuncs.a defaultCal.o modeFunc.o manual.o programmerCal.o converter.o engineerCal.o

defaultCal.o: defaultCal.c
	gcc -c -g defaultCal.c -o defaultCal.o
modeFunc.o: modeFunc.c
	gcc -c -g modeFunc.c -o modeFunc.o
manual.o: manual.c
	gcc -c -g manual.c -o manual.o
programmerCal.o: programmerCal.c
	gcc -c -g programmerCal.c -o programmerCal.o
converter.o: converter.c
	gcc -c -g converter.c -o converter.o
engineerCal.o: EngineerCal.c
	gcc -c -g EngineerCal.c -o engineerCal.o -lm
clean:
	rm defaultCal.o modeFunc.o programmerCal.o converter.o manual.o engineerCal.o
