#include "main.h"

/**
 * print_times_table - prints multiplication table for n for values 0<n<15
 * @n: value for multiplication
 */

void print_times_table(int n)
{
	int i, j, k, s;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				s = i * j;
				if (s < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (s >= 10 && s < 100)
				{
					_putchar(' ');
					_putchar(s / 10 + '0');
				}
				else
				{
					k = s / 10;
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				_putchar(s % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
