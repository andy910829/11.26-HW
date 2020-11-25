#include<stdio.h>
#include<stdlib.h>

int cubebyvalue(int n);

int main(void)
{
	int number = 5;
	printf("the original value of number is %d", number);

	number = cubebyvalue(number);
	printf("\nthe new value of number is %d\n", number);
	system("pause");
	return 0;
}

int cubebyvalue(int n)
{
	return n * n * n;
}