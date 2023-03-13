#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: Address of the first string
 * @s2: Address of the second string
 * Return: A char pointer
 */

char *str_concat(char *s1, char *s2)
{
	int n, m, t, i = 0, j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = strlen(s1);
	m = strlen(s2);
	t = m + n + 1;
	p = malloc(sizeof(char) * t);

	if (p == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		p[j] = s2[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);

}
