#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in list_t
 * @h: pointer to start of linked list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
