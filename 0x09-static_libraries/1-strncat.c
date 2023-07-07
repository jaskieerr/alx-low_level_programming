#include "main.h"

/**
 * _strncat - function concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to be concatenated
 * Return: the pointer to the resulting string destd
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, z;

	for (i = 0; dest[i]; i++)
		;
	for (z = 0; src[z] && z < n; z++)
		dest[i + z] = src[z];
	dest[i + z] = '\0';
	return (dest);
}
