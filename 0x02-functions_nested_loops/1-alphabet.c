#include "main.h"

/**
 * print_alphabet - printing alphabet in lower case, followed by new line
 *
 * return : void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
