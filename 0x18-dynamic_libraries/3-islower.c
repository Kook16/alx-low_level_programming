#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase charcter
 * @c: character to be checked
 * Return: 1 for true and 0 for false
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
