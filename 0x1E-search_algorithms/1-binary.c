#include "search_algos.h"
/**
* binary_search - searches value in sorted array via binary search
* @array: pointer to the first element of the array
* @size: number of elements in the array
* @value:value to search for
* Return: value index, -1 if no value
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left_index = 0;
	size_t right_index = size - 1;
	size_t mid_index;
	size_t i;

	if (array == NULL)
		return (-1);
	while (left_index <= right_index)
	{
		printf("Searching in array: ");
		for (i = left_index; i <= right_index; i++)
		{
			printf("%d", array[i]);
			if (i != right_index)
				printf(", ");
		}
		printf("\n");

		mid_index = (left_index + right_index) / 2;

		if (array[mid_index] == value)
			return (mid_index);
		else if (array[mid_index] < value)
			left_index = mid_index + 1;
		else
			right_index = mid_index - 1;
	}
	return (-1);
}
