
GCC_FLAGS=-std=c99 -Wall

task402: stacktest.c stack.c stack.h
	gcc ${GCC_FLAGS} $^ -o $@

