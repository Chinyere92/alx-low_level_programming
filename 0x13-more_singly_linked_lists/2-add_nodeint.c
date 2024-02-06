#include "lists.h"
/**
 * add_nodeint - add new list to listint_t list
 * @head: point to head
 * @n: new data or value to creat for
 * Return: address to new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *result = (listint_t *)malloc(sizeof(listint_t));

	if (result == NULL)
		return (NULL);

	result->n = n;
	result->next = NULL;

	if (*head == NULL)
		*head = result;
	else
	{
		result->next = *head;
		*head = result;
	}
	return (result);
}
