#include "lists.h"

/**
 * print_dlistint - fun0
 * @h: double list
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *cour;
size_t i = 0;

cour = h;
	while (cour != NULL)
	{
		printf("%d\n", cour->n);
		cour = cour->next;
		i++;
	}
return (i);
}
