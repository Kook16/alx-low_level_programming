#include "main.h"

/**
 * _strcpy - copies  string from src to dest
 * @dest: Address where string is to be copied to
 * @src: Address from where the string is copied from
 * Return: returns the address of copied string
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	while (count > 0)
	{
		count--;
		dest--;
	}
	return (dest);
}
