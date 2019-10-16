all: funcs.o main.o
	gcc -o program main.o funcs.o

func.o: funcs.c headers.h
	gcc -c funcs.c

main.o: main.c headers.h
	gcc -c main.c

run:
	./program
clean:
	rm *.o
	rm *~
