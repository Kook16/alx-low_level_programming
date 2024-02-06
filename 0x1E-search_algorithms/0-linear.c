#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: Value to search for
 * Return: -1 if array is null or if value not found, otherwise index
 **/

int linear_search(int *array, size_t size, int value)
{
int i;

if (!array)
return (-1);

for (i = 0; i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
