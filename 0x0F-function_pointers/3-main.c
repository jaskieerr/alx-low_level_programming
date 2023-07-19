#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - u know the drill at this point
  * @argc: arg counter
  * @argv: arg vector victoriouso
  * Return: nada
  */
int main(int argc, char *argv[])
{
	int (*funp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	funp = get_op_func(argv[2]);

	if (!funp)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", funp(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
