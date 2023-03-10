#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: Address of the first charcter in the first string
 * @s2: Address of the first character in the second sting
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int x, y, n, i = 0, r = 0;

	x = strlen(s1);
	y = strlen(s2);
	if (x >= y)
		n = x;
	else
		n = y;
	while (i < n)
	{
		if (*s1 == *s2)
			r = 0;
		else
		{
			r = *s1 - *s2;
			break;
		}
		i++;
		s1++;
		s2++;
	}
	return (r);
}
