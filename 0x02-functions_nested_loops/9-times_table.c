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
		for (k = 0; k <= 9; k++)
		{
			s = i * k;
			if (k <= 8)
			{
				if (s < 10)
				{
					_putchar(s + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(s / 10 + '0');
         				_putchar(s % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if(s < 10)
				{
					_putchar(s + '0');
				}
				else
				{
					_putchar(s / 10 + '0');
					_putchar(s % 10 + '0');
				}
				_putchar('$');
			}
		}
		_putchar('\n');
	}
}
