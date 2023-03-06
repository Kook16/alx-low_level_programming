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
		if (i % 10)
			_putchar(' ');
		if (!(i % 10) && i)
			_putchar('\n');
		s[i] = b;
		_putchar('0');
		_putchar('x');
		_putchar('0');
		_putchar('0' + s[i]);
	}
	_putchar('\n');
	return (s);
}
