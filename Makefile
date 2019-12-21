CC=gcc
AR=ar
FLAGS= -Wall -g

all: isort.o txtfind.o txtfind isort 

isort: isort.o 
	$(CC) $(FLAGS) -o isort isort.o

isort.o: isort.c
	$(CC) $(FLAG) -c isort.c 

txtfind: txtfind.o 
	$(CC) $(FLAGS) -o txtfind txtfind.o

txtfind.o: txtfind.c
	$(CC) $(FLAG) -c txtfind.c 

.PHONY: clean all
clean:
	rm -f *.o *.so
