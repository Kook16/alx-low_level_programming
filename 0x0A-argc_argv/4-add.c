#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments passed to command line
 * @argv: Array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	while (i < argc)
	{
		if (atoi(argv[i]) && atoi(argv[i]) >= 0)
		{
			break;
		}
		i++;
	}
	if (i == argc)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) && atoi(argv[i]) >= 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
