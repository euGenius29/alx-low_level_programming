#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * _prime - finds the prime number
 *
 * @n: number to evaluate
 * Return: 1 if prime , 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/*
 * _prime - finds the prime number
 *
 * @i: checks prime
 *
 * Return: 1 if prime, 0 if not
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
