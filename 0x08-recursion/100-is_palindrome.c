#include "main.h"

int check_pal(char *s, int i, int j);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the lenght of a string
 *
 * @s: input string
 *
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters for palindrome
 *
 * @s: input string
 * @i: checker
 * @j: lenght of string
 *
 * Return: 1 on success, 0 on failure
 */
int check_pal(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
		return (0);
	if (i >= j)
		return (1);
	return (check_pal(s, i + 1, j - 1));
}
