#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a 'list_t' list
 * @h: pointer to the start of the list
 * Return: number of nodes on the list
 */
size_t print_list(const list_t *h)
{
	size_t l

	l = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		list++;
	}
	return (i);
}
