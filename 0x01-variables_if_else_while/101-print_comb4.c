#include <stdio.h>

/**
 * main - Entry point
 *
 * print - all possible combinations of three different numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (i == j)
				{
				}
				else
				{
					if (i < j && j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
					if (i == 55 && j == 56 && k == 57)
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
