#include "main.h"

/**
 * rev_string - reverses a string
 * @s: Address of the first character in the string
 */

void rev_string(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len >= 0)
	{
		s--;
		len--;
	}
}
