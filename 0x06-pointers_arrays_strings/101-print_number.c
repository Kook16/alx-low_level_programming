#include "main.h"
#include <math.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	int i, tmp, digit, count = 1;
	unsigned int num;

	tmp = n;
	while (tmp != 0)
	{
		count *= 10;
		tmp /= 10;
	}
	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	num = n;
	for (i = count / 10; i > 0; i = i / 10)
	{
		digit = (num / i) % 10;
		_putchar('0' + digit);
	}
}
