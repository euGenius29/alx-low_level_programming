#include "main.h"

int _atoi(char *s);

/**
 * main - returns multiplication of two variables from argv
 *
 * @argc: ensure only two arguments are passed
 * @argv: stores variables for multiplication
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i, j;

		i = _atoi(argv[1]);
		j = _atoi(argv[2]);

		printf("%d\n", (i * j));
	}
	else
		printf("Error\n");
	return (0);
}

#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int sign, i;
	unsigned int res;

	sign = 1;
	i = 0;
	res = 0;
	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
