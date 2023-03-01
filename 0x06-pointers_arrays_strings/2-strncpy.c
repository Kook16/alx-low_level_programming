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
	int i = 0;

	if (dest == NULL || src == NULL || n == 0)
		return (dest);
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
