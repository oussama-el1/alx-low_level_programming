#include "lists.h"

/**
 * add_nodeint_end - function toadd node to end of list
 * @head: ponter to head
 * @n: number
 * Return: addresse new elt
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = NULL;
listint_t *c;

new = (listint_t *) malloc(sizeof(listint_t));

if (!new)
{
return (NULL);
}

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

c = *head;

while (c->next != NULL)
{
c = c->next;
}

c->next = new;

return (new);
}
