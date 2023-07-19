#include "function_pointers.h"
#include <stdio.h>

/**
* int_index -a function that searches for an integer.
 * @array: the array of ints
 * @size: size of  the array
 * @cmp: potr of function
 * Return: kinda depends rtfm
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
