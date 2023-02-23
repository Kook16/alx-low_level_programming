#include "main.h"
#include <ctype.h>

/**
 * print_number - prints an int
 * @n: value to print
 */

void print_number(int n)
{
	int i;

	if (isdigit(n))
	{
		if (n > 9 && n < 100)
		{
			_putchar(n / 10 + '0');
		}
		else if (n >= 100 && n < 1000)
		{
			i = n / 10;
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else if (n >= 1000)
		{
			i = n / 10;
			_putchar(i / 10 + '0');
			_putchar((i / 10) / 10 + '0');
			_putchar((i % 10) + '0');
		}
		_putchar(n % 10 + '0');
	}
}
