#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked
 * Return: 1 for uppercase and 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
