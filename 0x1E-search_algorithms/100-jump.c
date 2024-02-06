#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: index of the value, or -1 if array is NULL or value index isnt found
 **/

int jump_search(int *array, size_t size, int value)
{
int val = sqrt(size), prev, step, status = 0;

if (!array)
return (-1);

prev = 0;
step = val;

while (step <= (int)size && array[step] <= value)
{
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
prev = step;
step += val;
status = 1;
}

if (!status)
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
printf("Value found between indexex [%d] and [%d]\n", prev, step);
while (prev <= step && prev < (int)size)
{
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
prev += 1;
}
return (-1);
}
