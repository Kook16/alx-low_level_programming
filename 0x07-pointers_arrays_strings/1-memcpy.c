#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copies memory area
 * @dest: Addresss of first location of the destination
 * @src: Address of the first location of the source
 * @n:number of bytes to be copied
 * Return: address of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL)
		return (dest);
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
