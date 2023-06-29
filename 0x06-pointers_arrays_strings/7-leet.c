#include "main.h"

/**
 * leet - encodeing the string into 1337
 * @s: the string to be encoded
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	int i, g;
	char *decoding = "aAeEoOtTlL";
	char *encoding = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (g = 0; decoding[g]; g++)
			if (s[i] == decoding[g])
				s[i] = encoding[g];
	}

	return (s);
}
