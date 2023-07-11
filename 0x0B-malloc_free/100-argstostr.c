#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr -  a function that concatenates all the arguments
 * of the program.
 * @ac: the numbea of arguments
 * @av: the array of arguments
 * Return: kinda dep
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, t, len;

	if (!ac || !av)
		return (NULL);

	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, t = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, t++)
			str[t] = av[i][j];
		str[t] = '\n';
		t++;
	}
	str[t] = '\0';

	return (str);
}
