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
    int i, end, start;

    if (array == NULL)
        return (-1);
    start = 0;
    end = sqrt(size);

    while (end < (int)size && array[end] < value)
    {
        printf("Value checked array[%d] = %d\n", start, array[start]);
        start = end;
        end += sqrt(size);
    }
    printf("Value found between index [%d] and [%d]\n", start, end);

    for (i = start; i < end; i++)
    {
        printf("Value checked array[%d] = %d\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}