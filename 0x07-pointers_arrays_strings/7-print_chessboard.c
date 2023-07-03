#include "main.h"

/**
 * print_chessboard - A function that prints a chessboard
 * @a: a pointer to the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i = 8;
	int j = 8

	for (i = 0; i < j; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
