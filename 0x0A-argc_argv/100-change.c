#include "main.h"
#include <stdlib.h>

int change_calc(int money, int count);

/**
 * main - prints number of coins needed to make change
 *
 * @argc: number of arguments
 * @argv: argument name to convert to int
 *
 * Return: On success 0, On error, 1
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = 0;
		int count = 0;

		int money = atoi(argv[1]);

		if (money <= 0)
		{
			printf("0");
			return (0);
		}
		else
		{
			i = change_calc(money, count);
			printf("%d\n", i);
		}
	}
	return (0);
}

/**
 * change_calc - calculates change from money
 * @money: amount to be changed
 * @count: quantity of coins to give
 *
 * Return: 1 on error, 0 on success
 */

int change_calc(int money, int count)
{
	int coins[5] = {25, 10, 5, 2, 1};

	while (money >= coins[0])
	{
		money -= coins[0];
		count++;
	}
	if (money < coins[0] && money >= coins[1])
	{
		money -= coins[1];
		count++;
	}
	if (money < coins[1] && money >= coins[2])
	{
		money -= coins[2];
		count++;
	}
	if (money < coins[2] && money >= coins[3])
	{
		money -= coins[3];
		count++;
	}
	if (money == coins[4])
	{
		money -= coins[4];
		count++;
	}
	return (count);
}
