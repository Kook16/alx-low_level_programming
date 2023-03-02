#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: Address of the first character of the string
 * Return: address of s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] >= 122)
			s[0] = toupper(s[0]);
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
|| s[i] == '?' || s[i] == '"' || s[i] == ')' || s[i] == '(' ||
s[i] == '{' || s[i] == '}' || s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
			s[i + 1] = toupper(s[i + 1]);
		i++;
	}
	return (s);
}
