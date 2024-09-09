#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 * @n: Data to insert in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *h;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;

		return (node);
	}

	h = *head;
	while (h->next != NULL)
		h = h->next;

	node->prev = h;
	h->next = node;

	return (node);
}
