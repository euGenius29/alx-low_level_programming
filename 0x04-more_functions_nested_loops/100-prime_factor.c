#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)

{
	long i, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 2; i <= square; i++)
	{
		if (number % i == 0)
		{
			maxf = i;
			number = number / i;
		}
	}
	if (number > 2)
	{
		maxf = number;
	}
	printf("%ld\n", maxf);
	return (0);
}
