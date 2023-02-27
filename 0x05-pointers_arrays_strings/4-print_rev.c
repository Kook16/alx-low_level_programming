#include "main.h"

/**
 * print_rev - prints a string in reverse followed by new line
 * @s: Address of the first character of the string
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
	{
		_putchar(*s);
		len--;
		s--;
	}
	_putchar('\n');
}
