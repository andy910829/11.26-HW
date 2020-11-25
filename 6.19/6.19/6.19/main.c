#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int a, b;
	int i, j,t;
	int dice[11] = { 0 };

	srand(time(0));

	for (i = 0; i < 36000; i++)
	{
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		for(t=2;t<13;t++)
		{
			if ((a+b) == t)
			dice[t-2]++;
		}
	}
	
	
	for (j = 2; j < 13; j++)
	{	
		printf("%d%10d\n", j, dice[j-2]);
	}
	
}