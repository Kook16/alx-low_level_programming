#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

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
int low, i, jump;

if (array == NULL)
return (-1);
jump = sqrt(size);
printf("%d\n", jump);
low = 0;
for (i = 0; i < (int)size; i += jump)
{
if (array[i] == value)
return (i);
else if (value > array[i])
low = i;
else if (value < array[i] || i + jump >= (int)size)
break;
printf("Value checked array[%d] = [%d]\n", i, array[i]);
}
printf("Value found between indexes [%d] and [%d]\n", low, i);
for (i = low; i < (int)size && i < low + jump; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (value == array[i])
return (i);
}
return (-1);
}
