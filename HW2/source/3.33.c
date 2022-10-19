#include <stdio.h>

int main()
{
	int length, breadth;
	printf("enter length and breadth:");
	scanf("%d %d", &length, &breadth);
	for (int i = 1; i <= length; i++)
	{
		for (int t = 1; t <= breadth; t++)
		{

			if (i == 1 || t == 1 || i == length || t == breadth)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}

	return 0;
}
