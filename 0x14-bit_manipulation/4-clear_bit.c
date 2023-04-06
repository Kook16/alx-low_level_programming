#include "main.h"

/**
 * clear_bit - sets the vale of a bit to 0 at a given index
 * @n: A pointer to an integer
 * @index: position of bit to  be changed
 * Return: 1 (sucess) -1 (fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (n == NULL)
		return (-1);
	mask = 1 << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
