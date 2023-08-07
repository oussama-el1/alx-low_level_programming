#include "main.h"

/**
 * **alloc_grid - two dem array
 * @width: w
 * @height: h
 * Return: ponter to pointer in (succes), NULL in (Error)
 */
int **alloc_grid(int width, int height)
{
int **ptr;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);

ptr = (int **) malloc(sizeof(int *) * height);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ptr[i] = (int *) malloc(sizeof(int) * width);
if (ptr[i] == NULL)
{
free(ptr);
for (j = 0; j <= i; j++)
free(ptr[j]);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
ptr[i][j] = 0;
}
}
return (ptr);
}
