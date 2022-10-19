#include <stdio.h>
#include <math.h>
int main()
{
	printf("%s\n\n", "(A)");
	for (int i = 0; i <= 9; i++)
	{
		for (int a = 0; a <= i; a++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("%s\n\n", "(B)");
	for (int i = 9; i >= 0; i--)
	{
		for (int a = 0; a <= i; a++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("%s\n\n", "(C)");
	for (int i = 9; i >= 0; i--)
	{
		for (int c = 0; c < 9 - i; c++)
		{
			printf("%s", " ");
		}

		for (int a = 0; a <= i; a++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("%s\n\n", "(D)");
	for (int i = 0; i <= 9; i++)
	{
		for (int c = 9; c > i; c--)
		{
			printf("%s", " ");
		}
		for (int a = 0; a <= i; a++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
}
