#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: Address of the first character of the first string
 * @src: Address of the first character of the second string
 * Return: Address of dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, x = 0;

	i = strlen(dest);
	j = strlen(src);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	while (x < (j + i))
	{
		dest--;
		x++;
	}
	return (dest);
}
