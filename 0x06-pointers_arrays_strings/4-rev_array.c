#include "main.h"

/*
 * reverse_array - reverse array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */

int reverse_array(int *a, int n)
{
	int i, j;

	j = 0;
	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
