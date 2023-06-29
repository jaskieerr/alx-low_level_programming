#include "main.h"

/**
 * cap_string - capitalizing all string  chars
 * @str: the string
 * Return: `str` value
 */

char *cap_string(char *str)
{
	int i, j;
	int trigger;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, trigger = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			trigger = 1;
		for (j = 0; nots[j] != '\0'; j++)
		{
			if (nots[j] == str[i])
				trigger = 1;
		}

		if (trigger)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				trigger = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				trigger = 0;
			else if (str[i] > 47 && str[i] < 58)
				trigger = 0;
		}
	}
	return (str);
}
