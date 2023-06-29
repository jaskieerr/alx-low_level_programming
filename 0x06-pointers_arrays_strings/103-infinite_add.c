#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * reverse - it reverses the string
 * @s: string to be reversed
 * Return: the Pointer to the reversed string add
 */
char *reverse(char *s)
{
	size_t len = strlen(s);
	size_t v;

	for (v = 0; v < len / 2; v++)
	{
		char temp = s[v];

		s[v] = s[len - 1 - v];
		s[len - 1 - v] = temp;
	}
	return (s);
}
/**
 * infinite_add - it adds the two numbers
 * @n1: 1st positive numba
 * @n2: 2nd positive numba
 * @r: buffa that we'll use to store the result
 * @size_r: buffa size
 * Return: te pointa to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	char *temp = malloc(sizeof(char) * (len1 + len2 + 1));
	int v, j, k, sum, carry = 0;

	/* Perform addition */
	for (v = len1 - 1, j = len2 - 1, k = 0;
		v >= 0 || j >= 0 || carry;
		v--, j--, k++)
	{
		sum = carry;
		sum += (v >= 0) ? n1[v] - '0' : 0;
		sum += (j >= 0) ? n2[j] - '0' : 0;
		temp[k] = sum % 10 + '0';
		carry = sum / 10;
	}

	if (k == 0)
		return (0);

	temp[k] = '\0';

	if ((int)strlen(temp) + 1 > size_r)
		return (0);

	r = strcpy(r, temp);
	free(temp);

	return (reverse(r));
}
