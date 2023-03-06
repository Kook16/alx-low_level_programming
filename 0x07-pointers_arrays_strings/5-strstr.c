#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: address of the first character of the string
 * @needle: address of thr first character of the second string
 * Return: address of string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (strlen(needle) == 0)
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
		if (needle[j] == '\0')
			return (haystack + i);
		}
	}
	return (NULL);
}
