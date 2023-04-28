#include "lists.h"

/**
 * listint_len - Calculates the length of a linked list
 * @h: The listint_t
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;
	listint_t *temp = (listint_t *) h;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
