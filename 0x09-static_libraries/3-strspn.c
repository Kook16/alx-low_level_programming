#include "main.h"

/**
 * _strspn - gets the length of a prefix string
 * @s: Address of the first string
 * @accept: Address of the second string
 * Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, flag;
	char *p = accept;

	while (*s != '\0')
	{
		flag = 0;
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				flag = 1;
				break;
			}
			accept++;
		}
		if (flag)
			i++;
		else
			break;
		s++;
		accept = p;
	}
	return (i);
}
