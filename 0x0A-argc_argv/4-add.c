#include "main.h"

int _atoi(char *s);

/**
 * main - returns the added value of argc
 *
 * @argc: argument count
 * @argv: argument value
 * Return: On completion 0, On error 1;
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int res = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i < argc)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				int j;

				j = _atoi(argv[i]);
				res += j;
				i++;
			}
		}
		printf("%d\n", res);
	}
	return (0);
}
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
