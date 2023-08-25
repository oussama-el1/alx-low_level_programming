#include "lists.h"

/**
 * free_list - function to free memory
 * @head: pointer to head of list
 */

void free_list(list_t *head)
{
list_t *cour;

cour = head;

while (cour)
{
free(cour->str);
free(cour);
cour = cour->next;
}
}
