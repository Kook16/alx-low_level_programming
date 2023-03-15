#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: Number of arguments entered
 * @av: A pointer to a pointer to an array
 * Return: A char pointer
 */

char *argstostr(int ac, char **av)
{
	int i, n = 0, k = 0;
	size_t j;
	char *m, *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		n += strlen(av[i]);
	}
	p = malloc(sizeof(char) * (n  + ac - 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		m = av[i];
		for (j = 0; j < strlen(av[i]); j++)
		{
			p[k++] = m[j];
		}
		p[k++] = '\n';
	}
	return (p);
}
