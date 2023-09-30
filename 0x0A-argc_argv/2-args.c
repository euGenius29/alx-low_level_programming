#include "main.h"

/**
 * main - prints its name
 *
 * @argc: invoked to print name
 * @argv: stores argument name to be printed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
