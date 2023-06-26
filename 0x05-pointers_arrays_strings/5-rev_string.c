#include "main.h"

/**
 * rev_string - it reverses a string
 * @s : string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tempo;

	while (s[i])
		i++;

	while (i > j)
	{
		tempo = s[--i];
		s[i] = s[j];
		s[j++] = tempo;
	}
}
