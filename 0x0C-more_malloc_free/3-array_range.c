#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: mininum value
 * @max: maximum value
 * Return: An integer pointer
 */

int *array_range(int min, int max)
{
	int i, dif, *ptr;

	if (min > max)
		return (NULL);
	dif = (max - min) + 1;
	ptr = malloc(sizeof(int) * dif);
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
