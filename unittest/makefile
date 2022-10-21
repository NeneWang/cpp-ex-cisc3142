CC = g++
CFLAGS = -g -w -Wall

main: main.o util.o
	$(CC) $(CFLAGS) -o main main.o util.o
	./main

test_unit: test_unit.o util.o
	$(CC) $(CFLAGS) -o test_unit test_unit.o util.o
	./test_unit

util.o: util.hpp util.cpp
	$(CC) $(CFLAGS) -c util.cpp

clean:
	rm -f core *.o main test_unit
