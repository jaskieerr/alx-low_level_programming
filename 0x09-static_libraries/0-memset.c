#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: gets pointer to the memory area
 * @b: gets constant byte
 * @n: number of bytes to be filled
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
