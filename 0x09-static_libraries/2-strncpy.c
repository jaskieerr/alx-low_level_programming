#include "main.h"

/**
 * _strncpy - it copies the string
 * @dest: the destinationof the string
 * @src: the source string
 * @n: the numbea of byte to be copied
 * Return: the pointer resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
