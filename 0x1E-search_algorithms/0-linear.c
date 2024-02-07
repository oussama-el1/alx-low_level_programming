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
int i = 0;

if (array == NULL)
{
return (-1);
}

for (i = 0; i < (int)size; i++)
{
printf("Value checked array[%u] = %d\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
