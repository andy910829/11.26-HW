#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int b[4] = { 10, 20, 30, 40 };
	int *bAdd = b;

	printf("Array b printed with¡G\nArray subscript notation\n");
	for (int i = 0; i < 4; i++) {
		printf("b[%d] = %d\n", i, b[i]);
	}
	
	printf("\nPointer / offset notation where\nthe pointer is the array name\n");
	for (int i = 0; i < 4; i++) {
		printf("*(b + %d) = %d\n", i, bAdd[i]);
	}

	printf("Pointer subscript notation\n");
	for (int i = 0; i < 4; i++) {
		printf("bAdd[%d] = %d\n", i, bAdd[i]);
	}

	printf("\nPointer / offset notation\n");
	for (int i = 0; i < 4; i++) {
		printf("*(bAdd + %d) = %d\n", i, *(bAdd + i));
	}

	system("pause");
	return 0;
}