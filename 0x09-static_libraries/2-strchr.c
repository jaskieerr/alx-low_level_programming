#include "main.h"

/**
 * _strchr - A function that locates a character in  string
 * @s: the string to be scanned
 * @c: the character to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the char is not found
 */

char *_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char) !c)
		return ((char *) &s[i]);
	return (0);
}
