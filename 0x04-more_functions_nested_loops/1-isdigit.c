#include "main.h"

/**
 * _isdigit - checks if entered character is a digit
 *
 * @c: is the digit to be tested
 *
 * Return: 1 if a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
