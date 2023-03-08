#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Number whose natural square is required
 * Return: Integer
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);

	if (n <= 1)
		return (n);
	return (sqt(n, i, n));
}

