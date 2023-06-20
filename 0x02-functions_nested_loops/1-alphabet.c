i#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercases
 *
 * return - void
*/
void	print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
