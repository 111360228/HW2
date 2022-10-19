#include <stdio.h>

int main()
{
	float dollars, salary;
	for (int i = 1; i > 0; i++)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf("%f", &dollars);
		salary = 200 + dollars * 0.09;
		printf("Salary= $%0.2f\n", salary);
		if (dollars == -1)
			break;
	}
	return 0;
}
