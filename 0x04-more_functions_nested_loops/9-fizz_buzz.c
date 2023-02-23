#include <stdio.h>
/**
 * main - Entry point
 * desc: prints number from 1 - 100, Fizz(multiples of 3), Buzz(multiples of 5)
 * and FizzBuzz (multiples of 5 and 3).
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
