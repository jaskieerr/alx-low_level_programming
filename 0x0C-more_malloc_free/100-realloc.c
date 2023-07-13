#include "main.h"
#include <stdio.h>

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
	char *Charr;
	unsigned int i, y = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		Charr = malloc(new_size);
		return (Charr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	Charr = malloc(new_size);
	if (Charr == NULL)
		return (NULL);
	if (new_size > old_size)
		y = old_size;
	for (i = 0; i < y; i++)
		Charr[i] = oldp[i];
	free(ptr);
	return (Charr);
}
