#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

long long int largest_number(long long int a, long long int b, long long int c)
{
	long long int largest;

	if (a > b && a > c)
	{
		largest = a;
	}

	else if (b > a && b > c)
	{
		largest = b;
	}

	else
	{
		largest = c;
	}
	return (largest);
}
