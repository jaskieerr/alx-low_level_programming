#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocates memory for an array of nmemb
 * elements of size bytes each
 * and returns a pointer to the allocated memory.
 * @min: minimum range of values
 * @max: maximum range of value
 * Return: ptr to the array
 */
int *array_range(int min, int max)
{
	int *hi;
	int i;

	if (min > max)
		return (NULL);

	hi = malloc(sizeof(int) * (max - min + 1));
	if (hi == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		hi[i] = min + i;

	return (hi);
}
