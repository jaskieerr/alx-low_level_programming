#include "main.h"

/**
 * _strcpy - it yankes the string pointed to by src
 * @dest: destination string
 * @src: source string
 * Return: strin
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
