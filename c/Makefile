
main: main.c file.o misra.o
	gcc -o main main.c file.o misra.o

misra.o: misra.c 
	gcc -c misra.c 

file.o: file.h file.c
	gcc -c file.c

clean:
	@rm -f *.o main

.PHONY: clean
