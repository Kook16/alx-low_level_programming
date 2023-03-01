#include <string.h>
#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: Address of the first character of the string
 * Return: address of s
 */

char *cap_string(char *s)
{
	int n, i = 0;

	n = strlen(s);
	while (i < n)
	{
		if (s[i] == '.' || s[i] == ';' || s[i] == ',' || s[i] == '!' ||
s[i] == '/' || s[i] == '?' || s[i] == '"' || s[i] == ')' || s[i] == '(' ||
s[i] == '{' || s[i] == '}' || s[i] == '\n' || s[i] == ' ' || s[i] == '\t'|| i == 0)
			s[i + 1] = toupper(s[i + 1]);
		i++;
	}
	return (s);
}
