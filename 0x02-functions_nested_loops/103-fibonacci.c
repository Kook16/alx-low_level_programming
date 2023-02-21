#include <stdio.h>

/**
 * main - Entry point
 * prints - sum of even-valued fibonacci less than 4000000
 * Return: 0 (success)
 */


int main(void)
{
	long int num1 = 0;
	long int num2 = 1;
	long int fib;
	int i;
	int sum = 0;

	for (i = 0; i < 50; i++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		if (fib % 2 == 0 && fib < 4000000)
			sum += fib;
	}
	printf("%d\n", sum);
	return (0);
}
