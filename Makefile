CC = gcc
CFLAGS = -Wall

all: list

list: list.o main.o
	$(CC) $(CFLAGS) -o list list.o main.o

list.o: list.c list.h
	$(CC) $(CFLAGS) -c list.c

main.o: main.c list.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o list
