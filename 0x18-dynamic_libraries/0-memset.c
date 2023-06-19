#include "main.h"

/**
 * _memset - fills memory with a constant bytes
 * @s: Address of the first position of the buffer
 * @b: character to fill the screen
 * @n: Number of bytes to be filled
 * Return: address
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
