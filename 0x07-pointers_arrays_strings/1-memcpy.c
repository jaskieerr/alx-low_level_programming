#include "main.h"

/**
 * _memcpy -  a functiong that copies from memory area
 * @dest: it pointes to the destination array to be copied
 * @src: it pointes to the data to be copied
 * @n: the number of bytes to be copied
 * Return: pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (!dest || !src)
		return (NULL);

	while (n--)
		*(dest + n) = *(src + n);

	return (dest);
}
