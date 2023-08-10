#include "main.h"

/**
 * malloc_cheched - allocation with malloc
 * @b: sizeoff allocation
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);
return (ptr);
}
