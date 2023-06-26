#include "main.h"

/**
 * puts_half - it prints half a string flwd by new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int str_len = 0;
	int i = 0;

	while (str[str_len])
		str_len++;

	i = (str_len % 2 == 0) ? str_len / 2 : (str_len + 1) / 2;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
