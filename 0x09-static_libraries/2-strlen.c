#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Address of the first character of the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
