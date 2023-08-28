#include "lists.h"

/**
 * free_listint - function to free list
 * @head: head of list
 */

void free_listint(listint_t *head)
{
listint_t *c;


while (head)
{
c = head->next;
free(head);
head = c;
}
}
