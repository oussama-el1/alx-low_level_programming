#include "lists.h"

/**
 * pop_listint - function
 * @head: pointer to head pointer
 * Return: int n data
 */

int pop_listint(listint_t **head)
{
int r;
listint_t *pop = NULL;

if (*head == NULL)
{
return (0);
}

pop = *head;
r = (*head)->n;
(*head) = (*head)->next;
free(pop);
return (r);
}
