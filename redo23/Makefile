CC = g++
CFLAGS = -g -Wall -Wextra

default: main

main: main.o
	$(CC) $(CFLAGS) -o main main.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) main.o *.o *~
