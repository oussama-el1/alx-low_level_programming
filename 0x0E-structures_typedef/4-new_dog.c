#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function
 * @name: name
 * @owner: owner
 * @age: age
 * Return: ponter to elt or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;

new = malloc(sizeof(dog_t));

if (new == NULL)
return (NULL);
new->name = malloc(sizeof(char) * (strlen(name) + 1));
strcpy(new->name, name);
new->owner = malloc(sizeof(char) * (strlen(owner) + 1));
strcpy(new->owner, owner);
new->age = age;

return (new);
}
