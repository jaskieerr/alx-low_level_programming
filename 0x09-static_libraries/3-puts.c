#include "main.h"

/**
 * _puts - It prints the string followed by a new line
 *
 * @str : The string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i++]);

	_putchar('\n');
}
