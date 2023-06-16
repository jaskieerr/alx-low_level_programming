#include <stdio.h>

/**
 * main -It prints the alphabet in lowercase in reverse via putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');

	return (0);
}
