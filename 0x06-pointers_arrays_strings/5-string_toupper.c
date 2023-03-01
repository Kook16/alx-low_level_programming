#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: Address of the first character of the string
 * Return: Adress of the first character of the string
 */

char *string_toupper(char *s)
{
	int n, i;

	n = strlen(s);
	i = 0;
	while (i < n)
	{
		s[i] = toupper(s[i]);
		i++;
	}
	i--;
	return (s);
}
