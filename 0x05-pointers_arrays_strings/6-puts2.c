#include "main.h"

/**
 * puts2 - prints every other character of a string from the first character
 * @str: Address of the first character of the string
 */

void puts2(char *str)
{
	int len = 0, i;
	char *s;

	s = str;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(*s);
		s++;
	}
	_putchar('\n');
}
