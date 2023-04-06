#include "main.h"

/**
 * get_bit - returns the value of abit at a given index
 * @n: number whose bit is to be set at particular index
 * @index: position of n's bit to be set
 * Return: number whose value is set or -1(fail)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int  res;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	res = (n & (1 << index));
	return (res ? 1 : 0);
}
