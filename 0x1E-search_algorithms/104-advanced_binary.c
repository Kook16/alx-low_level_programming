#include <stdio.h>
#include <stdlib.h>

/**
 * advanced_binary - Searches for a value in a sorted array of integers using
 *                   the advanced binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not
 * found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
size_t mid = size / 2, sub_result;
size_t i;

if (array == NULL || size == 0)
return (-1);

printf("Searching in array: ");
for (i = 0; i < size; ++i)
{
printf("%d", array[i]);
if (i < size - 1)
printf(", ");
}
printf("\n");


if (array[mid] == value)
return (mid);
else if (array[mid] > value)
return (advanced_binary(array, mid, value));
else
{
sub_result = advanced_binary(array + mid + 1, size - mid - 1, value);
if ((int)sub_result == -1)
return (-1);
else
return (mid + 1 + sub_result);
}
}
