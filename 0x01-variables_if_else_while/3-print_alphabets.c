#include <stdio.h>

/**
 * main - Entry point
 *
 * print - alphabets in lowercase
 *
 * Return: 0 (success0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
