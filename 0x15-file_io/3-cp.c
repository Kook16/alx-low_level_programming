#include "main.h"

/**
 * main - Entry point
 * @argc: ...
 * @argv: ...
 * Return: 0
 */

int main(int argc, char **argv)
{
	int inhandle, outhandle, bytes, FD_VALUE;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from %s\n", argv[1]);
		exit(97);
	}
	inhandle = open(argv[1], O_RDONLY);
	if (inhandle == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	outhandle = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
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
	FD_VALUE = close(inhandle);
	if (FD_VALUE == -1)
	{
		dprintf(STDERR_FILENO, "Can't close %d", FD_VALUE);
		exit(100);
	}
	FD_VALUE = close(outhandle);
	if (FD_VALUE == -1)
	{
		dprintf(STDERR_FILENO, "Can't close %d", FD_VALUE);
		exit(100);
	}

	return (0);
}
