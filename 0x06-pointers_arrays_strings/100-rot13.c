#include "main.h"

/**
 * rot13 -  it encodes string via rot13
 * @s: the string to be encoded
 * Return: the Pointer to the encoded string s
 */
char *rot13(char *s)
{
	int i, g;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (g = 0; a[g]; g++)
		{
			if (s[i] == a[g])
			{
				s[i] = b[g];
				break;
			}
		}
	}

	return (s);
}
