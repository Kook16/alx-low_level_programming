#include <stdio.h>
/**
 * main - Entry point
 * print - Sum of multiples of 3 or 5 that are below 1024
 * Return: 0 success
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
