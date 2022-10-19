#include <stdio.h>

int main()
{
	float hours, rate, interest;
	for (int i = 1; i > 0; i++)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf("%f", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of the worker($00.00):");
		scanf("%f", &rate);
		if (hours >= 40)
		{
			printf("Salary is $%.2f\n", (rate * 40 + (hours - 40)*1.5*rate));
		}
		else
		{
			printf("Salary is $%.2f\n", (rate*hours));
		}

	}


	return 0;
}
