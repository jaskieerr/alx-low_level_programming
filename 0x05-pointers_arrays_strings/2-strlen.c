#include "main.h"

/**
 * _strlen - It prints the length of a string
 * @s: Pointes to  string
 * Return: Length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		++i;

	return (i);
}
