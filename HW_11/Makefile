
all: prog
	./prog

prog: main.o temp_functions.o
	gcc -o main.o temp_functions.o 
	
main.o: 
	gcc -c main.c
	
temp_functions.o:
	gcc -c temp_functions.c
	
clean:
	rm -rf *.o prog

