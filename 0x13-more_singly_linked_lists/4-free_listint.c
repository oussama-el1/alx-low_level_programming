#include "lists.h"

/**
 * free_listint - function to free list
 * @head: head of list
 */

void free_listint(listint_t *head)
{
listint_t *c;

c = head;

while (c != NULL)
{
free(c);
c = c->next;
}
}
