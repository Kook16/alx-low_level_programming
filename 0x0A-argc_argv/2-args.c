#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments passed to command line
 * @argv: Array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void)(argc);
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
