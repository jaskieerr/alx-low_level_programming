#include "search_algos.h"

/**
 * linear_search - searches for value in arr of ints via the Linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: val to be searched
 * Return: index of value in  array if found, or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)

	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (1);
		}
	}
	return (-1);
}
