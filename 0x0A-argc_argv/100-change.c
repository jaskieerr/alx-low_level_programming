#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the numba of arguments.
 * @argv: the Array of arguments.
 * Return: 0 or 1 on error.
 */

int main(int argc, char *argv[])
{
	int n, cents, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int num_denominations = sizeof(denominations) / sizeof(denominations[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (n = 0; n < num_denominations && cents; n++)
	{
		coins += cents / denominations[n];
		cents %= denominations[n];
	}

	printf("%d\n", coins);
	return (0);
}
