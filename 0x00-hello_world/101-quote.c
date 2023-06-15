#include <unistd.h>

/**
 * main - A C program that prints a quote without using printf or puts.
 *
 * Return: return 1 (failure)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*str)
		write(STDERR_FILENO, str++, 1);

	return (1);
}
