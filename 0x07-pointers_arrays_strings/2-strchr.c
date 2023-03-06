#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: Address of the first character of the string
 * @c: Character to be found
 * Return: Addres of the string
 */

char *_strchr(char *s, char c)
{
	int i = 0, n = strlen(s);

	if (s == NULL)
		return (s);
	while (i <= n)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
