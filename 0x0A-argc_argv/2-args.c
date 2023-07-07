#include <stdio.h>
/**
 * main - a program that prints all
 * arguments it receives.
 * @argc: the numba of arguments
 * @argv: the array of arguments
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
