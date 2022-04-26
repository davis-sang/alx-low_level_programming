#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint - adds new node at the beginning of a list.
 *@head: pointer to the beginning of a list.
 *@n: integer to add to list.
 *Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
