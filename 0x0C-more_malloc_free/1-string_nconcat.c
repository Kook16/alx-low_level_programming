#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: Address of first string
 * @s2: Address of second string
 * @n: number of characters to copy from s2
 * Return: A char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, total, i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	total = len1 + n + 1;
	ptr = malloc(sizeof(char) * (total));
	if (ptr == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		ptr[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
