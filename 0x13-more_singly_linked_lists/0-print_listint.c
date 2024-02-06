#include "lists.h"
/**
 * print_listint - function that print all element of listint_t
 * @h: point to listint
 * Return: total num of element
 */
size_t print_listint(const listint_t *h)
{
	int sm = 0;

	while (h != NULL)
	{
		sm += 1;

		printf("%d\n", h->n);
		h = h->next;
	}
	return (sm);
}
