#include "main.h"
/**
 * times_table - prints the 9 times table starting from 0
 */

void times_table(void)
{
	int i;
	int k;
	int s;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (k = 0; k <= 9; k++)
		{
			_putchar(',');
			_putchar(' ');
			s = i * k;
			if (s < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(s / 10 + '0');
			}
			_putchar(s % 10 + '0');
			if (k == 9)
				_putchar('$');
		}
		_putchar('\n');
	}
}
