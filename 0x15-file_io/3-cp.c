#include "main.h"
/**
 * main - Entry point
 * @argc: ...
 * @argv: ...
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int inhandle, outhandle, bytesr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inhandle = open(argv[1], O_RDONLY);
	if (inhandle == -1 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	outhandle = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((bytesr = read(inhandle, buffer, 1024)) > 0)
	{
		if (outhandle == -1 || bytesr != write(outhandle, buffer, bytesr))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytesr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(inhandle) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", inhandle);
		exit(100);
	}
	if (close(outhandle) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", outhandle);
		exit(100);
	}
	return (0);
}
