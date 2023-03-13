#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: Number of rows
 * @height: number of columns
 * Return: An integer pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * (width));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(sizeof(int) * height);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
