#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */

void print_number(int n)
{
	int x = n, i = 0, k;

	while (x != 0)
	{
		x /= 10;
		i++;
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (i == 4)
	{
		k = n / 10;
		_putchar(k / 100 + '0');
		k = k % 100;
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
	}
	else if (i == 3)
	{
		k = n / 10;
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
	}
	else if (i == 2)
	{
		_putchar(n / 10 + '0');
	}
	else
	{
	}
	_putchar(n % 10 + '0');
}
