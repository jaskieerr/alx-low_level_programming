#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * main - main function
 * description: a program that copies
 * the content of a file to another file
 * @argc: arg count
 * @argv: arg array
 * Return: 0 on success or 97-100 if not
 */
int main(int argc, char *argv[])
{
	int from_i, to_i, r_bytes, wr_bytes;
	char buffa[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from_i = open(argv[1], O_RDONLY);
	if (from_i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_i = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_i == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((r_bytes = read(from_i, buffa, 1024)) > 0)
	{
		wr_bytes = write(to_i, buffa, r_bytes);
		if (wr_bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(from_i) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_i), exit(100);

	if (close(to_i) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_i), exit(100);

	return (0);
}
