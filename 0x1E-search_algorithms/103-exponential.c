#include "search_algos.h"
#include <stdio.h>
int binary_search1(int *array, int low, int high, int value);

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: index of the value or -1 if array is NULL or value index isnt found
 */
int exponential_search(int *array, size_t size, int value)
{
int bound = 1;
int low, high;

if (array == NULL)
return (-1);

while (bound < (int)size && array[bound] < value)
{
printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
bound *= 2;
}

low = bound / 2;
high = bound < (int)size ? bound : (int)(size - 1);

printf("Value found between indexes [%d] and [%d]\n", low, high);

return (binary_search1(array, low, high, value));
}

/**
 * binary_search1 - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @low: The starting index of the search range
 * @high: The ending index of the search range
 * @value: Value to search for
 * Return: index of the value, or -1 if value index isn't found
 */
int binary_search1(int *array, int low, int high, int value)
{
int mid;

while (low <= high)
{
int i;

printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
}
printf("\n");

mid = (low + high) / 2;

if (array[mid] == value)
return (mid);
else if (array[mid] < value)
low = mid + 1;
else
high = mid - 1;
}

return (-1);
}
