CC = g++
CFLAGS = -I. -Werror -Wall -pthread -g

all: clean main

main: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main
clean:
	rm -f *.o *.out main
