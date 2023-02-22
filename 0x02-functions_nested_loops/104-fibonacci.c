#include <stdio.h>
/**
 * main - Entry point
 * print - first 98 fibonacci numbers
 * Return: 0 success
 */


int main(void)
{
	unsigned long int num1 = 0;
	unsigned long int num2 = 1;
	unsigned long int fib;

	int i;

	for (i = 0; i < 98; i++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		printf("%lu", fib);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
