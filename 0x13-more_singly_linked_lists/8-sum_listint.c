#include "lists.h"

/**
 * sum_listint - fumction
 * @head: arg
 * Return: int
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *cour = NULL;

cour = head;

if (head == NULL)
{
return (0);
}

while (cour != NULL)
{
sum += cour->n;
cour = cour->next;
}

return (sum);
}
