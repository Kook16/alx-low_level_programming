#include "main.h"
int count_bits(int n);
/**
 * flip_bits - returns the no. of bit to be flip to get from one num 2 another
 * @n: number to be fliped
 * @m: number to which  is flipped to
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num;

	num = n ^ m;
	return (count_bits(num));
}

/**
 * count_bits - counts the number of set bits
 * @n: number with set bits
 * Return: Number of setbits
 */
int count_bits(int n)
{
	int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
