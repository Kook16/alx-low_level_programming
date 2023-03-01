#include "main.h"
#include "string.h"

/**
 * _strncat - concatenates two string
 * @dest: Address of the first string
 * @src: Address of the second string
 * @n: number of charcters to be concatenated from src
 * Return: address of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, x = 0, m;

	m = strlen(src);
	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	while (j < n && m != 0)
	{
		*dest = *src;
		dest++;
		src++;
		m--;
		j++;
	}
	*dest = '\0';
	while (x < (i + j))
	{
		dest--;
		x++;
	}
	return (dest);
}
