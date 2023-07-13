#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an
 * array using malloc
 * @nmemb: array count
 * @size: size of each ellement in the array
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *final;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	final = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		final[i] = 0;

	return (final);
}
