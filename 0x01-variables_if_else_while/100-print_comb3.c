#include <stdio.h>

/**
 * main - Entry point
 *
 * print - all possible combinations of two different numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i == j)
			{
			}
			else
			{
				if (i < j)
				{
					putchar(i);
					putchar(j);

					if (i == 56 && j == 57)
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
	putchar('\n');
	return (0);
}
