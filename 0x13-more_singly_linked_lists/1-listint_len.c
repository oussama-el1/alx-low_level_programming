#include "lists.h"

/**
 * listint_len - retuen len
 * @h: heade list
 * Return: len
 */

size_t listint_len(const listint_t *h)
{
size_t len = 0;
const listint_t *c = NULL;

c = h;
while (c != NULL)
{
len++;
c = c->next;
}
return (len);
}
