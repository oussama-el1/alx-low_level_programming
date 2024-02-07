#include "search_algos.h"

/**
 * 
 * 
 * 
*/

int binary_search(int *array, size_t size, int value)
{
    int i;
    int low = 0;
    int height = (int)size;
    int middle;
    int tmp;

    if (array == NULL)
    {
        return (-1);
    }
    while (low <= height)
    {
        for (i = 0; i < height; i++)
        {
            printf("Searching in array: ");
            if (i != height - 1){
                printf("%d, ", array[i]);
            }
            else{
                printf("%d", array[i]);
            }
        }
        middle = (low + height)/2;
        tmp = array[middle];

        if(tmp < value) low = middle + 1;
        else if(tmp > value) height = middle -1;
        else return i;
    }

    return (-1);
}