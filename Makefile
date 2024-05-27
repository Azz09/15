build: main.c node.c student.c 
			gcc -o student.o -c student.c 
			gcc -o node.o -c node.c
			gcc -o main.o -c main.c
			gcc -o 15 student.o node.o main.o
			rm node.o student.o main.o
clean: 
	- rm 15 data.bin
