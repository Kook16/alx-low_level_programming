#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: address of the first character to the string
 * Return: address
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <=
'Z')
		{
			if (s[i] > 'm' && s[i] < 'z' || s[i] > 'M' && s[i] < 'Z')
			{
				s[i] -= 13;
				break;
			}
			s[a] += 13;
			break;
		}
		a++;
	}
	return (s);
}
