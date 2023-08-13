CC=gcc
CFLAGS= -g  -Wall -Wextra -Werror

main: main.c board.o vector.o
	echo "Compiling main"
	$(CC) $(CFLAGS) -o main main.c board.o vector.o
board.o:board.c board.h
	echo "Compiling board"
	$(CC) $(CFLAGS) -c board.c
vector.o:vector.c vector.h
	echo "Compiling vector"
	$(CC) $(CFLAGS) -c vector.c
.PHONY: clean
clean:
	rm -rf *.o
.PHONY: run
run:
	./main
