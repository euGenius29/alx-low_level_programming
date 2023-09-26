#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: input array
 * @size: size to print
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += a[i * size + i];
	for (i = (size - 1); i >= 0; i++)
		sum2 += a[y * size + (size - y - 1)];
	printf("%d, %d\n", sum1, sum2);
}

