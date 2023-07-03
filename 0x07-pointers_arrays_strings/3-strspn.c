#include "main.h"

/**
 * _strspn - it gets the length string for a prefix sub string
 * @s: string that will be scanned
 * @accept: charachters to be mached
 * Return: Number of bytes initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int x;

	i = 0;
	x = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				x++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (x);
}
