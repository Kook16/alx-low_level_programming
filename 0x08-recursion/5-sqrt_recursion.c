#include "main.h"
int sqt(int n, int low, int high);
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

/**
 * sqt - Determines the square root of a number
 * @n: Number whose sqaure root is wanted
 * @low: Value is 1
 * @high: same as n
 * Return: An intger
 */
int sqt(int n, int low, int high)
{
	int mid = (low + high) / 2;
	int srt = mid * mid;

	if (high < low)
		return (-1);
	if (srt == n)
		return (mid);
	else if (srt > n)
		return (sqt(n, low, (mid - 1)));
	else
		return (sqt(n, low, (mid + 1)));
}
