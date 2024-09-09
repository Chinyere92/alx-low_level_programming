#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieves D node @ given index in doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve (starting from 0)
 *
 * Return: Pointer to the node at the specified index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count_index = 0;

	while (head != NULL)
	{
		if (count_index == index)
			return (head);
		head = head->next;
		count_index++;
	}

	return (NULL);
}
