#include "main.h"

/**
 * rev_string - reverses a string
 * @s: Address of the first character in the string
 */

void rev_string(char *s)
{
	int count =  0, i, middle;
	char *p = s;
	char temp;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	middle = count / 2;
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = temp;
	}
}
