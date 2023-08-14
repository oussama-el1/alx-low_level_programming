#include "doig.h"
#include <stdlib.h>

/**
 * init_dog - inistalisation function
 * @d: pointer
 * @name: variabl1
 * @age: variable2
 * @owner: variable3
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	d = malloc(sizeof(struct dog));
d->name = name;
d->owner = ownwe;
d->age = age;
}
