#include <stdio.h>
#include <stdlib.h>

/**
 * main - result of addition;
 * followed by a new line
 * @argc: the numba of arguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, y, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (y = 0; argv[i][y]; y++)
		{
			if (argv[i][y] < '0' || argv[i][y] > '9')
				return (printf("Error\n"), 1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
