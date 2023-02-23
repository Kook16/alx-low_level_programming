#include "main.h"

/**
 * print_diagonal - draws a digonal line on the terminal
 * @n: number of times the \ should be drawn
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(47);
			if (i != n - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
