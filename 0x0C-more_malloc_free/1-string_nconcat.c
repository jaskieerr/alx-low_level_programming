#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -a function that concatenates two strings.
 * @s1: ptr to the first string
 * @s2: ptr to thesecond string
 * @n: the number of bytes of s2 to be concatenated
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *final;
	unsigned int i, j, s1_len, s2_len;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len]; s2_len++)
		;

	n >= s2_len ? n = s2_len : n;

	final = malloc(sizeof(char) * (s1_len + n + 1));
	if (final == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		final[i] = s1[i];
	for (j = 0; j < n; j++)
		final[i + j] = s2[j];

	final[i + j] = '\0';
	return (final);
}
