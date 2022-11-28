all: mylib.o
	gcc -o main.out main.c mylib.o

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c
clear:
	rm -rf *.out
	rf -rf *.o