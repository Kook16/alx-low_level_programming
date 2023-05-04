#include "main.h"

/**
 * set_bit - sets the value of a nnumber at a given index to 1
 * @n: a pointer to integer
 * @index: ...
 * Return: 1 (sucess) -1 (fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (n == NULL)
		return (-1);
	mask = 1 << index;
	*n |= mask;
	return (1);
}
