#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to print
 * @text_content: the file's content
 * Return: -1 in error and 1 in success
 */

int create_file(const char *filename, char *text_content)
{
	int fileopen, fileread, filewrite;

	fileopen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (!filename)
		return (-1);

	if (fileopen == -1)
	{
		close(fileopen);
		return (-1);
	}

	if (!text_content)
	{
		close(fileopen);
		return (1);
	}
	for (fileread = 0; text_content[fileread]; fileread++)
		;

	filewrite = write(fileopen, text_content, fileread);
	if (filewrite == -1)
	{
		close(fileopen);
		return (-1);
	}
	close(fileopen);
	return (1);
}
