#include <stdio.h>

/**
 * main - Entry point
 *
 * print - single digit numbers from 0 t0 9 separated by comma
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
