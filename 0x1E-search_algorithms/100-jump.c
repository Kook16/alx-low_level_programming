#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

#define MIN(x, y) ((x) < (y) ? (x) : (y))

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 * or -1 if not found or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
int i = 0, j, status = 0;
int block = sqrt(size);

if (!array)
return (-1);

while (array[block] <= value && block < (int)size)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
i = block;
block += sqrt(size);
if (block > (int)size - 1)
return (-1);
status = 1;
}

if (!status)
printf("Value checked array[%d] = [%d]\n", i, array[i]);

printf("Value found between indexes [%d] and [%d]\n", i, block);
for (j = i; j < block; j++)
{
printf("Value checked array[%d] = [%d]\n", j, array[j]);
if (array[j] == value)
return (j);
}
return (-1);

}
