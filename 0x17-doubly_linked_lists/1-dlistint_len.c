#include "lists.h"
/**
 * dlistint_len - count total nodes in dlistint
 * @h: head of double linked list
 * Return: Total number of Node
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node_total = 0;

	while (h != NULL)
	{
		node_total += 1;
		h = h->next;
	}
	return (node_total);
}
