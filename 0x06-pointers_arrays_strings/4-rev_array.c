#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: Address of the first value of the array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j = 0, m = 0;
	int *x = a;
	for (i = 0; i < n; i++)
	{
		x++;
	}
	x--;
	i--;
	while (j < i)
	{
		*a = *x;
		a++;
		x--;
		j++;
	}
	while (m < j)
	{
		a--;
		m++;
	}
}
