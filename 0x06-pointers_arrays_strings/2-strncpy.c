#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: Address of where string to be copied to
 * @src: Address of first character of the source of the string.
 * @n: Number of characters to be copied.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x, m, i = 0, j = 0;

	x = strlen(dest);
	m = strlen(src);
	if (m > n && n < x)
	{
		dest[n + 1] = '\0';
	}
	while (i < n && j < m)
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	return (dest);
}
