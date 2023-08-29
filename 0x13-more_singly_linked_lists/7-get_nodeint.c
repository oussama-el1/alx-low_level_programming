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
listint_t *temp = NULL;
unsigned int i = 0;

temp = head;
while (temp->next != NULL)
{
i++;
temp = temp->next;
}

free(temp);

if (head == NULL || index > i)
{
return (NULL);
}

cour = head;
i = 0;
	for (i = 0; i < index; i++)
	{
		cour = cour->next;
	}
return (cour);
}
