#include "main.h"
#include <string.h>

/**
 * leet - encodes a string into 1337
 * @s: address of the first character of the sting
 * Return: address to the first character.
 */

char *leet(char *s)
{
	int i, j;
	char p[5] = {'a', 'e', 'o', 't', 'l'};
	char p1[5] = {'4', '3', '0', '7', '1'};
	int n = strlen(s);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == p[j] || (s[i] + 32) == p[j])
			{
				s[i] = p1[j];
				break;
			}
		}
	}
	return (s);
}
