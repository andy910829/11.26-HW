#include<stdlib.h>
#include<stdio.h>

void StringReverse(const char* const s);

int main(void)
{
	char s[100];

	printf("Please enter the strings\n");
	scanf_s("%s", s,100);

	printf("the inverted strings order is\n");

	StringReverse(s);

	system("pause");
	return 0;
}

void StringReverse(const char* const s)
{
	if (s[0] == '\0')
	{
		return;
	}
	else
	{
		StringReverse(&s[1]);
		printf("%c", s[0]);
	}
}