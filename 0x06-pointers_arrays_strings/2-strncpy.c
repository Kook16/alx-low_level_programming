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
	int i = 0, j = 0, x;

	x = strlen(dest);
	while ((j < n) && (x != 0))
	{
		*dest = *src;
		dest++;
		src++;
		j++;
		x--;
	}
	while ( i < j)
	{
		dest--;
		i++;
	}
	return (dest);
}
