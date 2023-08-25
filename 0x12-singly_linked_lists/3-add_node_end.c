#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - new
 * @head: double pointer
 * @str: string
 *
 * Return: address new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *cour;
	unsigned int l = 0;

	while (str[l])
		l++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = l;
	new->next = NULL;

	cour = *head;
	if (*head == NULL)
	{
	*head = new;
		return (new);
	}

	while (cour->next != NULL)
		cour = cour->next;

	cour->next = new;

	return (new);
}
