# CSE 29 Winter 2025 Lab 8: Stack

CC = gcc
FLAGS = -Wall -g

stack.o:	stack.h stack.c
	$(CC) $(FLAGS) stack.c -c -o $@

test_%:	stack.o test_%.c
	$(CC) $(FLAGS) $^ -o $@

.PHONY:	clean

clean:
	rm -fr *.o test_stack
