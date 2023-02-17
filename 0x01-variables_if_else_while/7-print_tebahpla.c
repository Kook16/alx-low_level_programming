#include <stdio.h>

/**
 * main - Entry point
 *
 * print - all numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
