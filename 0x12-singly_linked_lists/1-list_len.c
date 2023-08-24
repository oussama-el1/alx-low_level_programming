#include "lists.h"

/**
 * list_len - print all elements list
 * @h: ponter to header
 * Return: unsigned int of elt list
 */

size_t list_len(const list_t *h)
{
size_t i = 0;
const list_t *cor;

cor = h;
while (cor != NULL)
{
i++;
cor = cor->next;
}
return (i);
}
