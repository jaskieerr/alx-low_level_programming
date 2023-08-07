#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * create_file - a function that creates a file
 * @filename: the file name
 * @text_content: when Null termiinates str and
 * write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, write_bytes, lenn;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (i == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(i);
		return (1);
	}

	for (lenn = 0; text_content[lenn]; lenn++)
		;

	write_bytes = write(i, text_content, lenn);
	if (write_bytes == -1)
	{
		close(i);
		return (-1);
	}

	close(i);
	return (1);
}
