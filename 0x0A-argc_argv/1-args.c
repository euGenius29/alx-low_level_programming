#include "main.h"

/**
 * main - prints its name
 *
 * @argc: invoked to print name
 * @argv: unused variable
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
