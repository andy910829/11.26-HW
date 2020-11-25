#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int *aptr;

	a = 7;
	aptr = &a;

	printf("the address of a is %p"
		"\nthe value of *aptr is %d", a, *aptr);

	printf("\n\nshowing that * and &are complements of "
		"each other\n&*aptr = %p"
		"\n*aptr = %p\n", &*aptr, *&aptr);
	system("pause");
	return 0;
}