#include "lists.h"
/**
 * add_dnodeint - add a new node as the head of double linkdlist
 * @head: Head of double linkd list
 * @n: Data to new node
 * Return: head or new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}

	node->next = *head;
	(*head)->prev = node;

	*head = node;
	return (node);
}
