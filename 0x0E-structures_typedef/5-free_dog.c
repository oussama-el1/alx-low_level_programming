#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - functirn to free pointer
 * @d: ponter
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
