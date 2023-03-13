#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a new string which is duplicate of str
 * @str: Address of the first character of the string
 * Return: A char pointer
 */

char *_strdup(char *str)
{
	int n, i = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	n = strlen(str) + 1;
	p = malloc(sizeof(char) * n);
	if (p == NULL)
		return (NULL);
	while (i < n)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
