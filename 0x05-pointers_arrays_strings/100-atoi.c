##include "main.h"

/**
 * _atoi - it convert a string to an integer
 * @s: the string to be converted
 * Return: integer as usual
 */
int _atoi(char *s)
{
	unsigned int number = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			number = number * 10 + (*s - '0');
		else if (number > 0)
			break;
		s++;
	}
	return (number * sign);
}
