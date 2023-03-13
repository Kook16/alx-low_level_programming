#include <stdlib.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char, and intialises it with a char
 * @size: size of the buffer
 * @c: character to fill the buffer
 * Return: A char pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);
	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c + 0;
	}
	return (p);
}
