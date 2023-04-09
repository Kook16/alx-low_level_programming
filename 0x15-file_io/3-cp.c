#include "main.h"

/**
 * main - Entry point
 * @argc: ...
 * @argv: ...
 * Return: 0
 */

int main(int argc, char **argv)
{
	int inhandle, outhandle, bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inhandle = open(argv[1], O_RDONLY);
	if (inhandle == -1 || argv[1] != NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	outhandle = open(argv[2], O_WRONLY | O_TRUNC, 644 | O_CREAT);
	if (outhandle == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (1)
	{
		bytes = read(inhandle, buffer, 1024);
		write(outhandle, buffer, bytes);
		if (bytes <= 0)
			break;
	}
	if (close(inhandle) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close %d", inhandle);
		exit(100);
	}
	if (close(outhandle) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close %d", outhandle);
		exit(100);
	}
	return (0);
}
