#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * read_textfile -a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of file to be read
 * @letters: numbea of letters to be read and printed
 * Return: letters that couldbe read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	char *buffa;
	ssize_t read_bytes, write_bytes;

	buffa = malloc(sizeof(char) * letters);
	if (buffa == NULL || filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		free(buffa);
		return (0);
	}

	read_bytes = read(i, buffa, letters);
	if (read_bytes == -1)
	{
		free(buffa);
		close(i);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffa, read_bytes);
	if (write_bytes == -1)
	{
		free(buffa);
		close(i);
		return (0);
	}

	free(buffa);
	close(i);
	return (write_bytes);
}
