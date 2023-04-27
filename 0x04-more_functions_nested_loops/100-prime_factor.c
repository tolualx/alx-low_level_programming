#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)

{

	long c, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (c = 1; c <= square; c++)
	{
	if (number % c == 0)
	{
	maxf = number / c;
	}
	}
	printf("%ld\n", maxf);
	return (0);

}
