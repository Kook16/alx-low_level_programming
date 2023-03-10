#include "main.h"

/**
 * print_sign - prints a sign of a number
 * @n: number whose sign is to be determined
 * Return: 1 for +, 0 for - and -1 for 0
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	else
	{
		i = 0;
		_putchar('0');
	}
	return (i);
}
