#include "main.h"
int prime_number(int n, int i);
/**
 * is_prime_number - return
 * @n: Number to be checked
 * Return: An integer
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (prime_number(n, i));
}
/**
 * prime_number - checks if n is prime or not
 * @n: Number to be checked
 * @i: integer
 * Return: An integer
 */
int prime_number(int n, int i)
{
	if (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		return (prime_number(n, i + 1));
	}
	return (1);
}
