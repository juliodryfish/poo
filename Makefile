CC=clang++
CFLAGS=-Wall -D DEBUG -std=c++17

all: source.o

soure.o: source.cpp
	$(CC)

libdebug.a: xalloc.o xprint.o
	ar -rcs $@ $^
	$(CC) test_lib.c -L . -ldebug -o exe
xalloc.o: xalloc.c debug.h
	$(CC) $(CFLAGS) -c xalloc.c
xprint.o: xprint.c debug.h
	$(CC) $(CFLAGS) -c xprint.c
clean: 
	rm *.o *.a
