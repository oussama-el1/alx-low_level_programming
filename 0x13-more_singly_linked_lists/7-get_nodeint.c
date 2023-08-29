#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: head ponter
 * @index: inedex de element
 * Return: addrese of elt
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *cour = NULL;
unsigned int i = 0;


if (head == NULL)
{
return (NULL);
}

cour = head;
	while (i < index)
	{
		cour = cour->next;
		i++;
	}
return (cour);
}
