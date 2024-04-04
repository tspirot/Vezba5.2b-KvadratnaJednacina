#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	float a, b, c, D, x1, x2;
	printf("Unesi a:\n");
	scanf("%f", &a);
	printf("Unesi b:\n");
	scanf("%f", &b);
	printf("Unesi c:\n");
	scanf("%f", &c);
	D = b * b - 4 * a * c;
	if (D < 0)
	{
		printf("Nema realnih resenja.\n");
	}
	else if (D == 0)
	{
		x1 = -b / (2 * a);
		printf("Jedno realno resenje: x1 = %.2f\n", x1);
	}
	else
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		printf("Dva realna resenja: x1 = %.2f, x2 = %.2f\n", x1, x2);
	}
	
}