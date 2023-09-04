#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * append_text_to_file -  a function that appends text at the end of a file
 * @filename: file nameu
 * @text_content: when Null terminated str, add at the end of file
 * Return: -1 on failure or 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, write_bytes, lenn;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);
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
