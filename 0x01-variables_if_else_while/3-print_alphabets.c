#include <stdio.h>

/**
 * main - A C program prints the alphabet in lowercase,
 * then in uppercase . followed by new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char	c = 'a';

	/* print the alphabet in lowercase */
	while (c <= 'z')
		putchar(c++);

	/* reset c to 'A' which is 65 in ASCII */
	c = 'A';
	/* print the alphabet in uppercase */
	while (c <= 'Z')
		putchar(c++);
	putchar('\n');

	return (0);
}
