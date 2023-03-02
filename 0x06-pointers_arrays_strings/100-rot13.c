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
		while (s[i] >= 97 && s[i] <= 122 || s[i] >= 65 && s[i] <= 90)
		{
			if (s[i] > 109 && s[i] < 122 || s[i] > 77 && s[i] < 90)
			{
				s[i] -= 13;
				break;
			}
			s[i] += 13;
			break;
		}
		i++;
	}
	return (s);
}
