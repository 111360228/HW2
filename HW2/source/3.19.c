#include <stdio.h>

int main()
{
	float principal, loan, rate, interest;
	for (int i = 1; i > 0; i++)
	{
		printf("Enter loan principal(-1 to end):");
		scanf("%f", &principal);
		if (principal == -1)
			break;
		printf("Enter interest rate:");
		scanf("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf("%f", &loan);
		interest = (principal*rate*(loan / 365));
		printf("The interest charge is $%.2f\n", interest);

	}


	return 0;
}
