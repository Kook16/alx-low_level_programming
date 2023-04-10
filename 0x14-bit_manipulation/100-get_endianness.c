#include "main.h"

/**
 * get_endianness - ...
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *p = (char *)&i;

	if (*p)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
