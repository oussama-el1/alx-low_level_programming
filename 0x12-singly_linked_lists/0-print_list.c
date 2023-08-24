#include "lists.h"

/**
 * print_list - print all elements list
 * @h: ponter to header
 * Return: unsigned int of elt list
 */

size_t print_list(const list_t *h)
{
size_t i = 0;
const list_t *cor;
	if (h == NULL)
	{
		printf("vide list");
		exit(1);
	}
cor = h;
	while (cor != NULL)
	{
		if (cor->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", cor->len, cor->str);
		i++;
		cor = cor->next;
	}
return (i);
}
