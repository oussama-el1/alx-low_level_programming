#include "lists.h"

/**
 * add_node - add node to list
 * @head: ponter to pointer head
 * @str: string
 * Return: ponter to new elt
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new = NULL;
int l = 0;

new = (list_t *) malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
exit(1);
}

while (str[l] != '\0')
{
l++;
}
new->len = l;

new->str = malloc(sizeof(char) * (l + 1));

new->str = strdup(str);

new->next = *head;

*head = new;

return (new);
}
