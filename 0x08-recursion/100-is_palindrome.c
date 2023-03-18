#include <string.h
#include "main.h"
int palindrome(char *s, int i, int n);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: Address of the string
 * Return: An integer
 */

int is_palindrome(char *s)
{
	int i = 0, j = strlen(s) - 1;

	if (s == "")
		return (1);
	return (palindrome(s, i, j));
}
/**
 * palindrome - checks if a string is palindrome or not
 * @s: Address of the string
 * @i: Integer
 * @j: Length of string - 1;
 * Return: An integer
 */
int palindrome(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i >= j)
			return (1);
		palindrome(s, ++i, --j);
	}
	else
		return (0);
}
