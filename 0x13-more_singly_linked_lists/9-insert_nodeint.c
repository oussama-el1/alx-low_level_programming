#include "lists.h"

/**
 * insert_nodeint_at_index - fun
 * @head: pointer to pointer
 * @idx: index
 * @n: number
 * Return: addresse new elt
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *cour = *head;
listint_t *new;
unsigned int i, len = 0;

new = (listint_t *)malloc(sizeof(listint_t));
new->n = n;

while (cour->next != NULL)
{
len++;
cour = cour->next;
}
if (*head == NULL || idx > len)
{
return (NULL);
}

	if (idx == 0)
	{

		new->next = *head;
		*head = new;
		return (new);
	}

cour = *head;

for (i = 0; i < (idx - 1); i++)
{
cour = cour->next;
}
new->next = cour->next;
cour->next = new;

return (new);
}
