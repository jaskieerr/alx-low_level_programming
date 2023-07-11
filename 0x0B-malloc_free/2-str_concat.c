#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *New_str;
	int str1_len, str2_len, i, j;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	for (str1_len = 0; s1[str1_len]; str1_len++)
		;
	for (str2_len = 0; s2[str2_len]; str2_len++)
		;

	New_str = malloc(sizeof(char) * (str1_len + str2_len + 1));
	if (!New_str)
		return (NULL);

	for (i = 0; i < str1_len; i++)
		New_str[i] = s1[i];

	for (j = 0; j < str2_len; j++)
		New_str[i + j] = s2[j];

	New_str[i + j] = '\0';

	return (New_str);
}
