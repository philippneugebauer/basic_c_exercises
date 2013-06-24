#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"

Matrix new(int r, int c) {
	Matrix m;
	int* matrixPointer = (int *)malloc(r*c*sizeof(int));
	m.r = r;
	m.c = c;
	m.a = matrixPointer;
	return m;
}

void set(Matrix x, int i, int j, int val) {
	int* matrixPointer = x.a;

	matrixPointer = matrixPointer + i*x.c + j;

	*matrixPointer = val;
}

void constantInit(Matrix x, int val) {
	for(int i = 0; i < x.r; i++){
		for(int j = 0; j < x.c ; j++){
			set(x, i, j, val);
		}	
	}
}

void delete(Matrix x) {
	free(x.a);
}

int get(Matrix x, int i, int j) {
	int* matrixPointer = x.a;

	matrixPointer = matrixPointer + i*x.c + j;

	return *matrixPointer;
	
}

void print(Matrix x) {
	for(int i = 0; i < x.r; i++){
		for(int j = 0; j < x.c; j++){
			printf("%d ", get(x, i, j));
		}
		printf("\n");
	}
}

void add(Matrix x, Matrix y, Matrix z) {
}

void mult(Matrix x, Matrix y, Matrix z) {
}

