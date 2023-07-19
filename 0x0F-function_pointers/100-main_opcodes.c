#include <stdio.h>
#include <stdlib.h>

/**
 * error - prints error message
 * and exit
 * @err: the err code
 */
void error(int err)
{
	printf("Error\n");
	exit(err);
}

/**
 * main - prints opcodes of its own main function
 * @argc: numba of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 2)
		error(1);

	j = atoi(argv[1]);
	if (j < 0)
		error(2);

	for (i = 0; i < j; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i < j - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
