#include <stdio.h>
#include <math.h>
int main()
{
	int kind;
	float wage, hours, amount, pieces, salary;
	printf("enter your pay code:");
	scanf("%d", &kind);


	switch (kind)
	{
	case 1:
		printf("enter your hourly wage:");
		scanf("%f", &wage);
		printf("enter your total hours:");
		scanf("%f", &hours);
		printf("your wages are $%.2lf\n", hours*wage);
		break;
	case 2:
		printf("enter your hourly wage:");
		scanf("%f", &wage);
		printf("enter your total hours:");
		scanf("%f", &hours);
		if (hours > 40)
			printf("your wages are $%.2lf\n", wage * 40 + (hours - 40)*1.5*wage);
		else
			printf("your wages are $%.2lf\n", hours*wage);
		break;
	case 3:
		printf("enter your weekly sales amount:");
		scanf("%f", &amount);
		printf("your wages are $%.2lf\n", 250 + amount * 0.057);
		break;
	case 4:
		printf("enter your total pieces:");
		scanf("%f", &pieces);
		printf("enter your piece of salary:");
		scanf("%f", &salary);
		printf("your wages are $%.2lf\n", pieces*salary);
		break;

	}
}
