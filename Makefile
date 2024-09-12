CC = g++
CFLAGS = -g -Wall -Wextra

default: probOneFive

probOneFive: probOneFive.o
	$(CC) $(CFLAGS) -o probOneFive probOneFive.o

probOneFive.o: probOneFive.cpp
	$(CC) $(CFLAGS) -c probOneFive.cpp

clean:
	$(RM) probOneFive *.0 *~
