#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of square matrix of int
 * @a: address of the array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(a + (i * size + j)); 
		}
		sum2 += *(a + (i * size + (size - i - 1)));
	}
	printf("%d, %d\n", sum1, sum2);
}
