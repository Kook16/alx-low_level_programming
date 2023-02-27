#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: address of first value passed to function
 * @b: address of second value passed to function
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
