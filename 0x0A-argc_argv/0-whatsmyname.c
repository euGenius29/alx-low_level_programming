#include "main.h"

/**
 * main - prints its name
 *
 * @argc: invoked to print name
 * @argv: unused variable
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
