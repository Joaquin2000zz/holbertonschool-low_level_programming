#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to print
 * @letters: number of letters it could read and print
 * Return: the size of the file readed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileopen, fileread, filewrite;
	char *buff;

	if (!filename)
		return (0);

	fileopen = open(filename, O_RDONLY);

	if (fileopen == -1)
	{
		close(fileopen);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		free(buff);
		return (0);
	}
	buff[letters] = '\0';
	fileread = read(fileopen, buff, letters);
	if (fileread == -1)
	{
		free(buff);
		close(fileopen);
		return (0);
	}
	filewrite = write(STDOUT_FILENO, buff, fileread);
	if (filewrite == -1)
	{
		free(buff);
		close(fileopen);
		return (0);
	}
	free(buff);
	close(fileopen);
	return (filewrite);
}
