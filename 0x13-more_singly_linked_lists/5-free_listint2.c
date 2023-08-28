#include "lists.h"

/**
 * free_listint2 - function to free list
 * @head: head of list
 */

void free_listint2(listint_t **head)
{
listint_t *c;

if (head == NULL)
{
return;
}

while (head)
{
c = (*head)->next;
free(*head);
*head = c;
}
}
