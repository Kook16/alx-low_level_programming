#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers followd by new line
 * @a: address of the first element of the array
 * @n: number of elements in the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		if (i != n - 1)
			printf(", ");
		a++;
	}
	printf("\n");
}
