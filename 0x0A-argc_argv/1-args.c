#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments passed to command line
 * @argv: Array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = argc - 1;

	(void)(argv);
	printf("%d\n", i);
	return (0);
}
