
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if not found
 **/

int interpolation_search(int *array, size_t size, int value)
{
int low = 0;
int high = size - 1;
size_t pos;

if (array == NULL)
return (-1);

while (low <= high && value >= array[low] && value <= array[high])
{
pos = low + (((double)(high - low) / (array[high] - array[low])) *
(value - array[low]));
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

if (array[pos] == value)
return (pos);

if (array[pos] < value)
low = pos + 1;
else
high = pos - 1;
}

printf("Value checked array[%lu] is out of range\n", pos);
return (-1);
}
