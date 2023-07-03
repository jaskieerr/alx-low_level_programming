#include "main.h"

/**
 * print_diagsums - It prints the sum of two diagonals of a
 * square matrix of integers
 * @a: the pointer to the first element in the matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sumof1, sumof2;

	sumof1 = 0;
	sumof2 = 0;
	for (i = 0; i < size; i++)
	{
		sumof1 += a[i * (size + 1)];
		sumof2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", sumof1, sumof2);
}
