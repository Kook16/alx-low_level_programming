#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: Address of the first character of the string
 * @c: Character to be found
 * Return: Addres of the string
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (s);
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
