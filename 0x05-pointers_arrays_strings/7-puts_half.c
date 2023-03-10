#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: Address of the first character in the string
 */

void puts_half(char *str)
{
	int len = 0, x, i;
	char *s = str;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	x = len;
	if (len % 2 != 0)
	{
		len += 1;
	}
	for (i = 1; i <= len / 2; i++)
	{
		s++;
	}
	for (; i <= x; i++)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
