#include <stdio.h>
#include <math.h>
int main()
{
	float a, t, s;
	float p = 5000;
	float r = 0.1;
	for (int t = 1; t <= 15; t++)
	{

		printf("²Ä%d¦~\t%.2f%%", t, r * 100);
		s = (1 + r);
		a = p * pow(s, t);
		r = r + 0.005;
		printf("\t$%.2f\n", a);
	}


	return 0;
}

