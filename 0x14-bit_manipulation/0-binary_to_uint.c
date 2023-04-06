#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: int string to be converted
 * Return: unsigned int value of b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int j = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		number = (number << 1) + (b[j] - '0');
		j++;
	}

	return (number);
}
