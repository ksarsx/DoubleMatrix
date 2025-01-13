#include <stdio.h>
#include <stdlib.h>

#define DEPTHLIMIT 16 // if you change it, you need to change depth in DoubleMatrix

///////// for structures /////////
typedef struct {
	int len;
	double* ptr;
} DoubleVector;

typedef struct {
	int len;
	int depth;
	void**************** ptr;
} DoubleMatrix;
//////////////////////////////////



///////// for methods /////////

////// DoubleVector //////

/// it creates new dinamic double vector
DoubleVector newDoubleVector(int size) {
	DoubleVector doubleVector;
	doubleVector.len = size;
	doubleVector.ptr = (double*)calloc(doubleVector.len, sizeof(double));
	return doubleVector;
}
/// it deletes all values from double vector
void clearDoubleVector(DoubleVector *doubleVector) {
	free(doubleVector->ptr);
	doubleVector->len = 0;
}
//////////////////////////

////// DoubleMatrix //////

/// it creates new dinamic double matrix, if you create it for vector past forDoubleVector = 1
/// and depth 0, else past forDoubleVector = 0 and to depth past depth of your inside matrix 
DoubleMatrix newDoubleMatrix(int size, int forDoubleVector, int depth) {
	DoubleMatrix doubleMatrix;
	doubleMatrix.len = size;
	if (forDoubleVector) {
		doubleMatrix.ptr = (void****************)malloc(sizeof(DoubleVector) * doubleMatrix.len);
		doubleMatrix.depth = 1;
	}
	else {
		doubleMatrix.ptr = (void****************)malloc(sizeof(DoubleMatrix) * doubleMatrix.len);
		doubleMatrix.depth = depth + 1;
	}
	return doubleMatrix;
}

///
void fillDoubleMatrix(DoubleMatrix* doubleMatrix, void**************** elem, int index) {

}

//////////////////////////



///////////////////////////////



///////// for tests /////////
int main() {

	/*
	int a = 10;

	int* ptr1 = &a;
	int** ptr2 = &ptr1;
	int****************** ptr3 = &ptr2;

	int** ptr4 = ptr3;
	printf("%p %p %p \n*ptr3 %p \n**ptr4 %p \n%d", ptr1, ptr2, ptr3, **ptr3, **ptr4, ***ptr3);
	*/

	
}
/////////////////////////////