#include "main.h"

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
		return (sqt(n, low, (high - 1)));
	else
		return (sqt(n, (low + 1), high));
}
