#include <stdlib.h>
#include <string.h>

/**
 * strtow - spilts a string into words
 * @str: Address of the string
 * Return: A Pointer to a pointer to a char
 */

char **strtow(char *str)
{
	int i, j, k, count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		j = 0;
		while (str[j] && str[j] != ' ')
			j++;
		words[i] = malloc(sizeof(char) * (j + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		strncpy(words[i], str, j);
		words[i][j] = '\0';
		i++;
		str += j;
	}
	words[count] = NULL;
	return (words);
}
