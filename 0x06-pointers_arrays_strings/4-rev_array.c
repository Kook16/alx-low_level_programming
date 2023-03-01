#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: Address of the first value of the array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
