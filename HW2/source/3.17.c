#include <stdio.h>

int main()
{
	float account, begining, charges, Credits, limit;
	for (int i = 1; i > 0; i++)
	{
		printf("Enter account number(-1 to end):");
		scanf("%f", &account);
		if (account == -1)
			break;
		printf("Enter begining balance:");
		scanf("%f", &begining);
		printf("Enter total charges:");
		scanf("%f", &charges);
		printf("Enter total Credits:");
		scanf("%f", &Credits);
		printf("Enter Credit limit:");
		scanf("%f", &limit);

		if ((begining + charges - Credits) > limit)
		{
			printf("account:%7.2f\n", account);
			printf("Credit limit:%7.2f\n", limit);
			printf("Balance:%7.2f\n", begining + charges - Credits);
			printf("Credit Limit Exceeded\n");
			printf("\n");
		}
		else
		{
			printf("\n");
			continue;
		}
	}

	return 0;
}
