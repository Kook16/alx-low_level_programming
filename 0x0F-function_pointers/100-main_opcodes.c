#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	printf("%02x", *((unsigned char *)&main + 0));
	for (i = 1; i < num_bytes; i++)
		printf(" %02x", *((unsigned char *)&main + i));
	printf("\n");
	return (0);
}
