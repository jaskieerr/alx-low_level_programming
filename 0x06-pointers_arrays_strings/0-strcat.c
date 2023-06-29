#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: the destination string
 * @src:  the source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i]; i++)
		;
	for (n = 0; src[j]; j++)
		dest[i + n] = src[n];
	dest[i + n] = '\0';
	return (dest);
}
