#include <stdio.h>

/**
 * array_iterator -a function that executes a function
 * given as a parameter on each element of an array.
 * @array: the array
 * @size: array size
 * @action: ptr of function
 * Return: nada
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size--)
		action(*array++);
}
