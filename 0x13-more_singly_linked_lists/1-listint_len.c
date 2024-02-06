#include "lists.h"
/**
 * listint_len - funct counting for total element
 * @h: pointer to listint_t
 * Return: total num of element
 */
size_t listint_len(const listint_t *h)
{
	int s = 0;

	for  (; h != NULL; h = h->next)
		s += 1;
	return (s);
}
