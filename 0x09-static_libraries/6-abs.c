#include <math.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number whose absolute value is required
 * Return: Absolute value of n
 */

int _abs(int n)
{
	int i;

	if (n >= 0)
		i = n;
	else
		i = -1 * n;
	return (i);
}
