#include <stdio.h>

int main()
{
	printf("The number of eggs for the day is: ");
	int eggs;
	scanf("%i", &eggs);

	double dozen;
	dozen = (double) eggs / 12;

	printf("The number of dozens is %f\n", dozen);


	return 0;
}
