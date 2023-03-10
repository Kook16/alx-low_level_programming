#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: Address of the first character of tthe string
 * @accept: Address of the first character of string2
 * Return: a character pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
		accept = p;
	}
	return (NULL);
}
