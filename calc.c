#include <stdio.h>

int main()
{
	double num1;
	double num2;
	printf("Enter first no: ");
	scanf("%lf", &num1);
	printf("Enter second no: ");
	scanf("%lf", &num2);

	printf("The answer is: %f", num1 + num2);

	return 0;
}
