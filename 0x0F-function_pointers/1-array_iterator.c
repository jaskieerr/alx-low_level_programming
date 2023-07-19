#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes
 * a function given as a parameter on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function
 * Return: nada
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
