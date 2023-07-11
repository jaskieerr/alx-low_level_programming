#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string to be copied
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dobb;
	int i, len;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++) /* strlen(str); */
		;

	dobb = malloc(sizeof(char) * (len + 1));
	if (!dobb)
		return (NULL);

	for (i = 0; i < len; i++) /* strcpy(dup, str); */
		dobb[i] = str[i];
	dobb[i] = '\0';

	return (dobb);
}
