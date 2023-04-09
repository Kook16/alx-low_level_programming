#include "main.h"

/**
 * read_textfile - ....
 * @filename: ...
 * @letters: ....
 * Return: ....
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t  bytes;
	int inhandle;
	char *buffer = malloc(sizeof(char *) * letters);

	if (filename == NULL)
		return (0);
	inhandle = open(filename, O_RDONLY);
	if (inhandle == -1)
		return (0);
	bytes = read(inhandle, buffer, letters);
	write(STDOUT_FILENO, buffer, bytes);
	free(buffer);
	close(inhandle);
	return (bytes);
}
