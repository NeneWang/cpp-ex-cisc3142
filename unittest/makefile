CC = g++
CFLAGS = -g -w -Wall

main: main.o util.o
	$(CC) $(CFLAGS) -o main main.o util.o
	./main

util.o: util.hpp util.cpp
	$(CC) $(CFLAGS) -c util.cpp

clean:
	rm -f core *.o main
