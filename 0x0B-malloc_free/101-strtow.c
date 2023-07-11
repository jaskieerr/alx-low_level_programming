#include <stdio.h>
#include "main.h"
#include <stdlib.h>

void olsun(char **, char *);
void make_word(char **, char *, int, int, int);

/**
 * strtow -  a function that splits a string into words.
 * @str: ptr to string to be splited
 * Return: the ptr to the strings array
 */
char **strtow(char *str)
{
	int i, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = flag = len = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		i++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);

	olsun(words, str);
	words[len] = NULL;
	return (words);
}

/**
 * olsun - fetching words into an array
 * @words: ptr to the strings array
 * @str: string ptr
 */

void olsun(char **words, char *str)
{
	int i, j, start, flag;

	i = j = flag = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			make_word(words, str, start, i, j);
			j++;
			flag = 0;
		}

		i++;
	}

	if (flag == 1)
		make_word(words, str, start, i, j);
}

/**
 * make_word - makes a word and inserts it in array
 * @words: ptr to the array of strings
 * @str: ptr to the string
 * @start: starting index
 * @finish: finish index 
 * @index: the index where to insert word
 */

void make_word(char **words, char *str, int start, int finish, int index)
{
	int i, j;

	i = finish - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < finish; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}
