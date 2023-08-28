#include "lists.h"

/**
 * add_nodeint - add node to list
 * @head: ponter to head
 * @n: int tom assign
 * Return: addres of new elt
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = NULL;

new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
		exit(1);
	}

new->n = n;
new->next = *head;
*head = new;

return (new);
}
