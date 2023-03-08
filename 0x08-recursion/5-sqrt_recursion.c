#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Number whose natural square is required
 * Return: Integer
 */

int _sqrt_recursion(int n)
{
	int m = sqrt(n);
	if (m * m != n)
		return (-1);
	else
		return (m);
}
