#include "main.h"

/**
 * _strcmp - it compares the given strings
 * @s1:  the 1st string
 * @s2: the 2nd string
 * Return: 0 if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int y;

	for (y = 0; s1[y] && s2[y] && s1[y] == s2[y]; y++)
		;
	return (s1[y] - s2[y]);
}
