#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: number who last digit is to be printed
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n >= 0)
	{
		_putchar(i + '0');
		return (i);
	}
	else
	{
		_putchar(-i + '0');
		return (-i);
	}
}
