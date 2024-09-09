#include "lists.h"
/**
 * print_dlistint - print double linked lists
 * @h: head of double linked list
 * Return: Total number of Node printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_total += 1;
		h = h->next;
	}
	return (node_total);
}
