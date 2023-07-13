#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the  size in bytes of the allocated
 * space for pointer
 * @new_size: the new size for mem block
 * Return: kinda depends
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *rlt;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		rlt = malloc(new_size);
		if (rlt == NULL)
			return (NULL);
		return (rlt);
	}

	rlt = malloc(new_size);
	if (rlt == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		rlt[i] = ((char *)ptr)[i];

	free(ptr);

	return (rlt);
}
