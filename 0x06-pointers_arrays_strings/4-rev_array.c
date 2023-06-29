#include "main.h"

/**
 * reverse_array - reverse array of ints
 * @a: the array of integers
 * @n: number of elements in the array of ints
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < (n / 2); i++)
	{
		k = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = k;
	}
}
