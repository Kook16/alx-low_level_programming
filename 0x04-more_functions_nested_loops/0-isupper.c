#include <ctype.h>
#include "main.h"

/**
 * _isupper - cheks for uppercase character
 * @c: character to be checked
 * Return: 1 for uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
