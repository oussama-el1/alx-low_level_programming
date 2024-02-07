#include "search_algos.h"

/**
 * linear_search - linrear search function
 * @array: array pointer to first elt
 * @size: size of array
 * @value: elt to sherche
 * Return: integer the index or -1
*/

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = %d\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
