#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - u know the drill at this point
  * @argc: arg counter
  * @argv: arg vector victoriouso
  * Return: nada
  */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
