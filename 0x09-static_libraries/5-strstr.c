#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: the string that will be scanned
 * @needle: tthe string containing the sequence of characters to be matched
 * Return: the pointer to the beginning of the located substring
 * or NULL if the substring not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j]; j++)
			if (haystack[i + j] != needle[j])
				break;
		if (!needle[j])
			return (haystack + i);
	}
	return (NULL);
}
