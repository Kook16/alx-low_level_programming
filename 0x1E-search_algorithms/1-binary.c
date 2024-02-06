#include "search_algos.h"
int binary_search_rec(int *array, int value, int low, int high);

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: index where value if located, other null if array is null
 *  or index is -1
 **/


int binary_search(int *array, size_t size, int value)
{
if (array == NULL)
return (-1);

return (binary_search_rec(array, value, 0, size - 1));
}

/**
 * binary_search_rec - recursively search through the array
 * @array: a pointer to the first element of the array to search in
 * @value: Value to search for
 * @low: ...
 * @high: ...
 * Return: index where value if located, other null
 * if array is null or index is -1
 **/


int binary_search_rec(int *array, int value, int low, int high)
{
int mid, i;

if (low > high)
return (-1);
printf("Searching in array: %d", array[low]);
for (i = low + 1; i <= high; i++)
printf(", %d", array[i]);
printf("\n");

mid = low + (high - low) / 2;
if (array[mid] == value)
return (mid);
if (array[mid] > value)
return (binary_search_rec(array, value, low, mid - 1));
else
return (binary_search_rec(array, value, mid + 1, high));
}
