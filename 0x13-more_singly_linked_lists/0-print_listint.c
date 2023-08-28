#include "lists.h"

/**
 * print_listint - printf list of int
 * @h: argument pounter to head of list
 * Return: size_t nember of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t len = 0;
const listint_t *c = NULL;

c = h;
	while (c != NULL)
	{
		printf("%d\n", c->n);
		c = c->next;
		len++;
	}
return (len);
}
